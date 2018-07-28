#include <Memory.h>
#include <Offsets.h>
#include <Utils.h>
#include <math.h>

CMem* mem = nullptr;
bool LootESP = true;
bool SkeletonESP = true;
bool AracESP = true;
bool HeadShot = false;
float DisMesafe = 99999;
float uzaklik = 45.f;
float DisId = -1;
float DisDist = 99999;
int FOV = 100;
#pragma region Tuşlarım
void Tuslar()
{
	if (GetAsyncKeyState(VK_F1) & 1)
	{
		LootESP = LootESP ? false : true;
		system("cls");
		cout << "Loot : " << LootESP << endl;
		cout << "Iskelet : " << SkeletonESP << endl;
		cout << "Arac : " << AracESP << endl;
		cout << "HeadShot : " << HeadShot << endl;


	}

	if (GetAsyncKeyState(VK_F2) & 1)
	{
		SkeletonESP = SkeletonESP ? false : true;
		system("cls");
		cout << "Loot : " << LootESP << endl;
		cout << "Iskelet : " << SkeletonESP << endl;
		cout << "Arac : " << AracESP << endl;
		cout << "HeadShot : " << HeadShot << endl;


	}
	if (GetAsyncKeyState(VK_F3) & 1)
	{
		AracESP = AracESP ? false : true;
		system("cls");
		cout << "Loot : " << LootESP << endl;
		cout << "Iskelet : " << SkeletonESP << endl;
		cout << "Arac : " << AracESP << endl;
		cout << "HeadShot : " << HeadShot << endl;


	}
	if (GetAsyncKeyState(VK_F5) & 1)
	{
		HeadShot = HeadShot ? false : true;
		system("cls");
		cout << "Loot : " << LootESP << endl;
		cout << "Iskelet : " << SkeletonESP << endl;
		cout << "Arac : " << AracESP << endl;
		cout << "HeadShot : " << HeadShot << endl;


	}

}

#pragma endregion

void Dongum()
{
	Tuslar();
	UpdateAddresses();
	int EntitySayisi = EntitySayisiniCek();
	float Canlar = 0.f;
	float Mesafe = 0.f;
	float DonguMesafe = 99999;
	float DonguId = -1;
	float DonguDist = 99999;

	Vector3 BenimPositionum = BenimPozisyonumuBul();

	for (int i = 0; i < EntitySayisi; i++)
	{
		DWORD_PTR EntityDW = GetEntity(i);
		int EntID = ActorIDBul(i);
		Vector3 spos = WorldToScreen(ActorPozisyonuBul(i), GetCameraCache());  
		Mesafe = BenimPositionum.Distance(ActorPozisyonuBul(i)) / 100;		   

		if (Playermi(EntID))
		{
			Canlar = ActorCaniniBul(i);

			if (Canlar > 0.f)
			{
				auto mesh = mem->RPM<DWORD_PTR>(EntityDW + 0x410, 0x8);

				if (Mesafe > 500.f) { continue; }
				Vector3 kafam = IskeletBul(mesh, 5);
				Vector3 headshot = IskeletBul(mesh, 6);
				float Dist = DistanceBetweenCross(kafam.x, kafam.y);


				DrawString((int)spos.x - 10, (int)spos.y + 10, D3DCOLOR_ARGB(255, 255, 240, 0), pFont, "[%0.2f]", Mesafe);

				if (Mesafe <= 250) { DrawHealthBar((int)spos.x - 10, (int)spos.y + 25, (Canlar / 4), 4, 0, 204); }


				///SKELETON
#pragma region Skeleton
				if (SkeletonESP == true)
				{
					if (!mesh || Mesafe > 350.f) { continue; }
					DrawSkeleton(mesh);
				}
#pragma endregion
				///SKELETON

				///AIM 
#pragma region AimBot
				if (GetKeyState(VK_CONTROL) & 0x8000 && Mesafe < 400 && TakimNumarasiBul(i) == NULL)
				{

					if ((Dist <= FOV) && Mesafe <= 400 && Dist < DonguDist&&  Mesafe < DonguMesafe)
					{
						DonguMesafe = Mesafe;
						DonguDist = Dist;
						DonguId = i;
					}

					if (i == DisId)
					{
						if (Mesafe <= 100)
						{
							if (HeadShot == true) { Aimbot(headshot.x, headshot.y); Circle((int)headshot.x, (int)headshot.y, 4, 30, 204, 0, 0, 255); }
							else { Aimbot(kafam.x, kafam.y + 5); Circle((int)kafam.x, (int)kafam.y + 5, 4, 30, 204, 0, 0, 255); }
						}


						else if (Mesafe > 100 && Mesafe <= 350)
						{
							if (HeadShot == true)
							{
								Aimbot(headshot.x, headshot.y);
								Circle((int)headshot.x, (int)headshot.y, 4, 30, 204, 0, 0, 255);
							}
							else { Aimbot(spos.x, spos.y + 3); }
						}
						else
						{
							Aimbot(spos.x, spos.y - 5);
						}
						DrawString((int)spos.x - 10, (int)spos.y + 35, D3DCOLOR_ARGB(255, 255, 255, 0), pFont, "Locked");
					}

				}
#pragma endregion
				///AIM 


			}
		}

		///ARACESP 
#pragma region AracEsp
		if (AracESP == true && !Playermi(EntID) && Mesafe <= 900.f)
		{
			if (isUaz(EntID) || isDacia(EntID) || isBike(EntID) || isBuggy(EntID))
			{
				DrawString((int)spos.x, (int)spos.y, D3DCOLOR_ARGB(255, 255, 255, 255), pFont, "Araç\n%0.2f", Mesafe);
			}
		}
#pragma endregion
		///ARACESP 

		///LOOTESP 
#pragma region LootEsp
		if (LootESP == true && EntID == entl.LootList[0])
		{
			DWORD_PTR DroppedItemGroupArray = mem->RPM<DWORD_PTR>(EntityDW + 0x2E8, sizeof(DroppedItemGroupArray));
			if (DroppedItemGroupArray == NULL)continue;
			int count = mem->RPM<int>(EntityDW + 0x2F0, 0x4);
			
			if (!count)
				continue;

			for (int j = 0; j < count; j++)
			{
				DWORD_PTR pADroppedItemGroup = mem->RPM<DWORD_PTR>(DroppedItemGroupArray + (j * 0x10), sizeof(pADroppedItemGroup));
				if (pADroppedItemGroup == NULL)continue;
				DWORD_PTR pRootcomp = mem->RPM<DWORD_PTR>(EntityDW + 0x188, sizeof(pRootcomp));
				if (pRootcomp == NULL)continue;
				Vector3 ItemPos = mem->RPM<Vector3>(pRootcomp + 0x254, sizeof(ItemPos));
				Vector3 ItemPosRelative = mem->RPM<Vector3>(pADroppedItemGroup + 0x2D0, sizeof(ItemPosRelative));
				Vector3 ItemPosAbsolute = (ItemPos + ItemPosRelative);
				float Mesafe = BenimPositionum.Distance(ItemPosAbsolute) / 100;
				if (Mesafe < 50.f)
				{
					Vector3 screenloc = WorldToScreen(ItemPosAbsolute, GetCameraCache());

					DWORD_PTR pUItem = mem->RPM<DWORD_PTR>(pADroppedItemGroup + 0x538, sizeof(pUItem));
					if (pUItem == NULL)continue;
					int ItemID = mem->RPM<int>(pUItem + 0x18, sizeof(ItemID));
					if (ItemID == NULL || ItemID > 200000 || ItemID < 0)continue;


					string ismi = GetNameFromId(ItemID);
					std::stringstream Ism;
					Ism << (string)LootIsmıBul(ismi);
					char * IsmInfo = new char[Ism.str().size() + 1];
					strcpy(IsmInfo, Ism.str().c_str());


					DrawString((int)screenloc.x, (int)screenloc.y, D3DCOLOR_ARGB(255, 255, 240, 0), pFont, IsmInfo);
				}
			}
		}
#pragma endregion
		///LOOTESP 
	}

	DisMesafe = DonguMesafe;
	DisId = DonguId;
	DisDist = DonguDist;
}

int render()
{
	//d3ddev->Clear(0, NULL, D3DCLEAR_TARGET, D3DCOLOR_ARGB(0, 0, 0, 0), 1.0f, 0);
	//d3ddev->Clear(NULL, NULL, D3DCLEAR_TARGET, D3DCOLOR_RGBA(0, 0, 0, 0), 1.0f, NULL);
	d3ddev->Clear(0, 0, D3DCLEAR_TARGET, 0, 1.0f, 0); 
	d3ddev->BeginScene();

	Circle((int)s_width / 2, (int)s_height / 2, FOV, 30, 65, 65, 65, 225);
	Circle((int)s_width / 2, (int)s_height / 2, 5, 30, 255, 255, 255, 255);
	//FillRGB(s_width / 2 - 11, s_height / 2 - 4, 22, 1, 240, 240, 250, 255); // -
	//FillRGB(s_width / 2, s_height / 2 - 14, 1, 22, 240, 240, 250, 255); // |
	Dongum();

	d3ddev->EndScene();
	d3ddev->PresentEx(0, 0, 0, 0, 0);
	return 0;
}
int main(int argc, char* argv[])
{
	system("MODE CON COLS=33 LINES=10");
	mem = new CMem(reinterpret_cast<HANDLE>(atoi(argv[1])));
	atexit(Shutdown);
	SetupWindow();
	CacheNames();
	uint32_t ret = (uint32_t)MainLoop();
	cin.get();
	return ret;
}