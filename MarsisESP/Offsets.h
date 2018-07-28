//needs to be heavily updated
//Last update about May a couple months before I am uploading this to UC

#include <Draws.h>
#include <Utils.h>


#pragma region Gereksizler  
IDirect3D9Ex* d3d;
IDirect3DDevice9Ex* d3ddev;

HWND hWnd;
HWND twnd;
MARGINS  margin = { 0,0,s_width,s_height };
LPD3DXFONT pFont;
ID3DXLine* d3dLine;
list<int> upper_part = { Bones::neck_01, Bones::Head, Bones::forehead };
list<int> right_arm = { Bones::neck_01, Bones::upperarm_r, Bones::lowerarm_r, Bones::hand_r };
list<int> left_arm = { Bones::neck_01, Bones::upperarm_l, Bones::lowerarm_l, Bones::hand_l };
list<int> spine = { Bones::neck_01, Bones::spine_01, Bones::spine_02, Bones::pelvis };
list<int> lower_right = { Bones::pelvis, Bones::thigh_r, Bones::calf_r, Bones::foot_r };
list<int> lower_left = { Bones::pelvis, Bones::thigh_l, Bones::calf_l, Bones::foot_l };

list<list<int>> skeleton = { upper_part, right_arm, left_arm, spine, lower_right, lower_left };

#pragma endregion

class Offsetler
{
public:
	 
	INT_PTR UWorldP = 0x40211D0;						//Programdan
	INT_PTR GNamesP = 0x3F036C8;						//Programdan
	INT_PTR GameInstanceP = 0x140; 			//TAMAM		////Pubg_engine_classes - class UWorld : public UObject {
	INT_PTR ULocalPlayerP = 0x38;			//TAMAM		//Pubg_engine_classes - class UGameInstance : public UObject
	INT_PTR LocalPlayerP = 0x0;				//TAMAM			//Sabit
	INT_PTR ViewportClientP = 0x58;			//TAMAM		//Pubg_engine_classes - class ULocalPlayer : public UPlayer
	INT_PTR UWorld = 0x80;					//TAMAM			//Sabit
	INT_PTR LocationP = 0x70;				//TAMAM			//Sabit
	INT_PTR RootComponentP = 0x188;			//TAMAM		//Pubg_engine_classes - class AActor : public UObject // 0x180
	INT_PTR PlayerControllerP = 0x30;		//TAMAM		//Pubg_engine_classes - class UPlayer : public UObject
	INT_PTR PawnP = 0x428;					//TAMAM		//Pubg_engine_classes - class APlayerController : public AController (AcknowledgedPawn)//418
	INT_PTR HealtP = 0x113C;				//TAMAM		//Pubg_tslgame_classes - class ATslCharacter : public AMutableCharacter //0x107C
	INT_PTR PersistentLevelP = 0x30;		//TAMAM		//Pubg_tslgame_classes - class UWorld : public UObject
	INT_PTR ULevelAActorsP = 0xB0;			//TAMAM			//Sabit //A0
	INT_PTR PlayerCameraManagerP = 0x448;	//TAMAM		//Pubg_engine_classes - class APlayerController : public AController //438
	INT_PTR CameraCacheP = 0x420;			//TAMAM		//Pubg_tslgame_classes - class APlayerCameraManager : public AActor //0x410
	INT_PTR IdP = 0x18;						//TAMAM		//Pubg_tslgame_classes - class UWorld : public UObject
	INT_PTR ControlRotation = 0x03E0;		//TAMAM		//Pubg_tslgame_classes - class AController : public AActor //0x03D0
	INT_PTR TeamNumberP = 0x0CF8;			//TAMAM		//Pubg_tslgame_classes - class ATslPlayerState : public APlayerState //0x0C88
	INT_PTR PlayerState = 0x03D0;			//TAMAM		//Pubg_engine_classes - class APawn : public AActor { //0x03C0
};
class DolacakOffsetler
{
public:
	DWORD_PTR pUWorld = 0;
	//	DWORD_PTR GName = 0;
	DWORD_PTR pGameInstance = 0;
	DWORD_PTR pLocalPlayerArray = 0;
	DWORD_PTR pLocalPlayer = 0;
	DWORD_PTR pViewportClient = 0;
	FCameraCacheEntry cameracache = { NULL };

};
class EntityList
{
public:
	int PlayerList[4];
	int KacOyuncu = 0;
	int LootList[2];
	int uaz[3];
	int dacia[8];
	int motorbike[4];
	int buggy[6];
};

class  Offsetler off;
class  DolacakOffsetler doff;
class  EntityList entl;


#pragma region PlayerÝþlemleri
//PLAYER ÖZELLÝKLERÝ
Vector3 BenimPozisyonumuBul()
{
	Vector3 pos;
	if (!mem) { return pos; }
	pos = mem->RPM<Vector3>(doff.pLocalPlayer + off.LocationP, 0xC);
	return pos;
}

float BenimCanimiBul()
{
	if (!mem) { return 0.f; }

	return mem->RPM<float>(PawnCek() + off.HealtP, 0x4);
}

DWORD_PTR PlayerStateCek()
{
	if (!mem) { return 0; }


	DWORD_PTR PlayerState = mem->RPM<DWORD_PTR>(PawnCek() + off.PlayerState, sizeof(PlayerState));

	return PlayerState;
}

DWORD_PTR TakimNumarasiBul(int i)
{

	if (!mem) { return 0; }
	DWORD_PTR team = mem->RPM<DWORD_PTR>(GetEntity(i) + off.TeamNumberP, sizeof(team));
	return team;

}

Vector3 BenimEyeLocationumuBul()
{
	FCameraCacheEntry cce;
	if (!mem) { return{ 0,0,0 }; }
	DWORD_PTR playercontroller = mem->RPM<DWORD_PTR>(doff.pLocalPlayer + off.PlayerControllerP, sizeof(playercontroller));

	DWORD_PTR PlayerCameraManager = mem->RPM<DWORD_PTR>(playercontroller + off.PlayerCameraManagerP, sizeof(PlayerCameraManager));

	cce = mem->RPM<FCameraCacheEntry>(PlayerCameraManager + off.CameraCacheP, sizeof(FCameraCacheEntry));
	return cce.POV.Location;
}
Vector3 LocalAngles()
{

	if (!mem) { return{ 0,0,0 }; }
	DWORD_PTR playercontroller = mem->RPM<DWORD_PTR>(doff.pLocalPlayer + off.PlayerControllerP, sizeof(playercontroller));

	Vector3 angel = mem->RPM<Vector3>(playercontroller + off.ControlRotation, sizeof(angel));
	return angel;
}


//PLAYER ÖZELLÝKLERÝ
#pragma endregion



#pragma region DiðerOyuncuÝþlemleri 
//DÝÐER OYUNCU ÖZELLÝKLERÝ
Vector3 ActorPozisyonuBul(int i)
{
	Vector3 pos;
	if (!mem) { return pos; }
	DWORD_PTR rootcomp = mem->RPM<DWORD_PTR>(GetEntity(i) + off.RootComponentP, sizeof(rootcomp));
	pos = mem->RPM<Vector3>((DWORD_PTR)rootcomp + 0x254, 0xC);

	return pos;
}
float ActorCaniniBul(int i)
{
	if (!mem) { return 0.f; }

	return mem->RPM<float>(GetEntity(i) + off.HealtP, 0x4);
}

int ActorIDBul(int i)
{
	if (!mem) { return 0; }

	return mem->RPM<int>(GetEntity(i) + 0x18, 0x4);
}

//DÝÐER OYUNCU ÖZELLÝKLERÝ
#pragma endregion



#pragma region Update vb
//DÝÐER ENTÝTYLER
DWORD_PTR GetUWorldPtr()
{
	if (!mem)
		return NULL;

	doff.pUWorld = mem->RPM<DWORD_PTR>(mem->GetBase() + off.UWorldP, sizeof(doff.pUWorld));
	doff.pGameInstance = mem->RPM<DWORD_PTR>(doff.pUWorld + off.GameInstanceP, sizeof(doff.pGameInstance));
	doff.pLocalPlayerArray = mem->RPM<DWORD_PTR>(doff.pGameInstance + off.ULocalPlayerP, sizeof(doff.pLocalPlayerArray));
	doff.pLocalPlayer = mem->RPM<DWORD_PTR>(doff.pLocalPlayerArray + off.LocalPlayerP, sizeof(doff.pLocalPlayer));
	doff.pViewportClient = mem->RPM<DWORD_PTR>(doff.pLocalPlayer + off.ViewportClientP, sizeof(doff.pViewportClient));
	return mem->RPM<DWORD_PTR>(doff.pViewportClient + off.UWorld, sizeof(doff.pUWorld));
}
void UpdateAddresses()
{
	if (!mem)
		return;

	doff.pUWorld = GetUWorldPtr();
	doff.pGameInstance = mem->RPM<DWORD_PTR>(doff.pUWorld + off.GameInstanceP, sizeof(doff.pGameInstance));
	doff.pLocalPlayerArray = mem->RPM<DWORD_PTR>(doff.pGameInstance + off.ULocalPlayerP, sizeof(doff.pLocalPlayerArray));
	doff.pLocalPlayer = mem->RPM<DWORD_PTR>(doff.pLocalPlayerArray + off.LocalPlayerP, sizeof(doff.pLocalPlayer));
	//doff.cameracache = GetCameraCache();
}
DWORD_PTR EntityListesiniCek()
{
	if (!mem) { return 0; }
	DWORD_PTR PersistentLevel = mem->RPM<DWORD_PTR>(doff.pUWorld + off.PersistentLevelP, sizeof(PersistentLevel));
	DWORD_PTR ULevelAActors = mem->RPM<DWORD_PTR>(PersistentLevel + off.ULevelAActorsP, sizeof(ULevelAActors));
	return ULevelAActors;
}

DWORD_PTR GetEntity(int i)
{
	if (!mem) { return 0; }
	auto entity = mem->RPM<DWORD_PTR>(EntityListesiniCek() + (i * 0x8), 0x8);
	if (!entity)
		return 0;

	if (entity == mem->RPM<DWORD_PTR>(mem->RPM<DWORD_PTR>(doff.pLocalPlayer + 0x30, 0x8) + 0x428, 0x8))
		return 0;

	return entity;
}
int EntitySayisiniCek()
{
	if (!mem) { return 0; }
	return mem->RPM<int>(mem->RPM<DWORD_PTR>(doff.pUWorld + 0x30, 0x8) + 0xB8, 0x4);
}
bool Playermi(int id)
{
	if (!mem) { return 0; }
	if (id == entl.PlayerList[0] || id == entl.PlayerList[1] || id == entl.PlayerList[2] || id == entl.PlayerList[3]) { return true; }
	else { return false; }

}
DWORD_PTR PawnCek()
{
	if (!mem) { return 0; }
	DWORD_PTR playercontroller = mem->RPM<DWORD_PTR>(doff.pLocalPlayer + off.PlayerControllerP, sizeof(playercontroller));

	DWORD_PTR Pawn = mem->RPM<DWORD_PTR>(playercontroller + off.PawnP, sizeof(Pawn));
	return Pawn;
}
DWORD_PTR PlayerCameraManagerCek()
{
	if (!mem) { return 0; }
	DWORD_PTR playercontroller = mem->RPM<DWORD_PTR>(doff.pLocalPlayer + off.PlayerControllerP, sizeof(playercontroller));

	DWORD_PTR PlayerCameraManager = mem->RPM<DWORD_PTR>(playercontroller + off.PlayerCameraManagerP, sizeof(PlayerCameraManager));
	return PlayerCameraManager;
}
FCameraCacheEntry GetCameraCache()
{
	FCameraCacheEntry cce;
	if (!mem) { return cce; }
	DWORD_PTR playercontroller = mem->RPM<DWORD_PTR>(doff.pLocalPlayer + off.PlayerControllerP, 8);
	DWORD_PTR PlayerCameraManager = mem->RPM<DWORD_PTR>(playercontroller + off.PlayerCameraManagerP, 0x8);
	cce = mem->RPM<FCameraCacheEntry>(PlayerCameraManager + off.CameraCacheP, sizeof(FCameraCacheEntry));
	return cce;
}
std::string GetNameFromId(int ID)
{
	DWORD_PTR GName = mem->RPM<DWORD_PTR>(mem->GetBase() + off.GNamesP, sizeof(GName));
	DWORD_PTR fNamePtr = mem->RPM<DWORD_PTR>(GName + int(ID / 0x4000) * 8, sizeof(fNamePtr));
	DWORD_PTR fName = mem->RPM<DWORD_PTR>(fNamePtr + 8 * int(ID % 0x4000), sizeof(fName));
	char name[64] = { NULL };
	if (ReadProcessMemory(mem->GetHandle(), (LPVOID)(fName + 16), name, sizeof(name) - 2, NULL) != 0)
		return std::string(name);
	return std::string("NULL");
}
void CacheNames()
{
	string name = "";
	for (int i = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0; i < 200000; i++)
	{
		if (c1 == 4 && c2 == 3 && c3 == 8 && c4 == 4 && c5 == 6 && c6 == 2)
		{
			cout << "Bitti" << endl;

			return;
		}
		name = GetNameFromId(i);

		if (name == "PlayerFemale_A" || name == "PlayerFemale_A_C" || name == "PlayerMale_A" || name == "PlayerMale_A_C")
		{
			entl.PlayerList[c1++] = i;
		}
		if (name == "DroppedItemInteractionComponent" || name == "DroppedItemGroup")
		{
			entl.LootList[c6++] = i;
		}

		if (name == "Uaz_A_01_C" || name == "Uaz_B_01_C" || name == "Uaz_C_01_C")
		{
			entl.uaz[c2++] = i;
		}
		if (name == "Dacia_A_01_C" || name == "Dacia_A_02_C" || name == "Dacia_A_03_C" || name == "Dacia_A_04_C" || name == "Dacia_A_01_v2_C" || name == "Dacia_A_02_v2_C" || name == "Dacia_A_03_v2_C" || name == "Dacia_A_04_v2_C")
		{
			entl.dacia[c3++] = i;
		}
		if (name == "ABP_Motorbike_03_C" || name == "ABP_Motorbike_04_C" || name == "BP_Motorbike_03_C" || name == "BP_Motorbike_04_C")
		{
			entl.motorbike[c4++] = i;
		}
		if (name == "Buggy_A_01_C" || name == "Buggy_A_02_C" || name == "Buggy_A_03_C" || name == "BP_PickupTruck_A_01_C" || name == "BP_Van_A_01_C" || name == "AquaRail_A_01_C"  )
		{
			entl.buggy[c5++] = i;
		}
		 
	}
}

string LootIsmýBul(string LootIsmý)
{
	string ism = "";
	if (LootIsmý == "Item_Back_E_02_Lv1_C") { ism = "Lv1 Canta"; }
	else if (LootIsmý == "Item_Back_F_02_Lv2_C") { ism = "Lv2 Canta"; }
	else if (LootIsmý == "Item_Back_C_02_Lv3_C") { ism = "Lv3 Canta"; }

	else if (LootIsmý == "Item_Back_E_01_Lv1_C") { ism = "Lv1 Canta"; }
	else if (LootIsmý == "Item_Back_F_01_Lv2_C") { ism = "Lv2 Canta"; }
	else if (LootIsmý == "Item_Back_C_01_Lv3_C") { ism = "Lv3 Canta"; }


	else if (LootIsmý == "Item_Armor_D_01_Lv2_C") { ism = "Lv2 Yelek"; }
	else if (LootIsmý == "Item_Armor_C_01_Lv3_C") { ism = "Lv3 Yelek"; }

	else if (LootIsmý == "Item_Armor_D_02_Lv2_C") { ism = "Lv2 Yelek"; }
	else if (LootIsmý == "Item_Armor_C_02_Lv3_C") { ism = "Lv3 Yelek"; }

	else if (LootIsmý == "Item_Head_F_02_Lv2_C") { ism = "Lv2 Kask"; }
	else if (LootIsmý == "Item_Head_G_02_Lv3_C") { ism = "Lv3 Kask"; }

	else if (LootIsmý == "Item_Head_F_01_Lv2_C") { ism = "Lv2 Kask"; }
	else if (LootIsmý == "Item_Head_G_01_Lv3_C") { ism = "Lv3 Kask"; }

	else if (LootIsmý == "Item_Heal_FirstAid_C") { ism = "FirstAid"; }
	else if (LootIsmý == "Item_Heal_MedKit_C") { ism = "MedKit"; }


	else if (LootIsmý == "Item_Weapon_AK47_C") { ism = "AK47"; }
	else if (LootIsmý == "Item_Weapon_SCAR-L_C") { ism = "Scar-L"; }
	else if (LootIsmý == "Item_Weapon_Pan_C") { ism = "Tava"; }
	else if (LootIsmý == "Item_Weapon_Kar98k_C") { ism = "Kar98"; }
	else if (LootIsmý == "Item_Weapon_M16A4_C") { ism = "M16A4"; }
	else if (LootIsmý == "Item_Weapon_HK416_C") { ism = "M416"; }
	else if (LootIsmý == "Item_Weapon_Mini14_C") { ism = "Mini14"; }
	else if (LootIsmý == "Item_Weapon_UMP_C") { ism = "UMP"; }



	else if (LootIsmý == "Item_Attach_Weapon_Muzzle_Suppressor_Large_C") { ism = "Supp(SR)"; }
	else if (LootIsmý == "Item_Attach_Weapon_Muzzle_Suppressor_Large") { ism = "Supp(AR)"; }
	else if (LootIsmý == "Item_Attach_Weapon_Muzzle_Suppressor_SniperRifle") { ism = "Supp(SRR)"; }



	else if (LootIsmý == "Item_Attach_Weapon_Muzzle_FlashHider_SniperRifle_C") { ism = "SR(FH)"; }


	else if (LootIsmý == "Item_Attach_Weapon_Muzzle_Compensator_SniperRifle_C") { ism = "Comp(AR)"; }
	else if (LootIsmý == "Item_Attach_Weapon_Muzzle_Compensator_Large_C") { ism = "Comp(SR)"; }


	else if (LootIsmý == "Item_Attach_Weapon_Magazine_ExtendedQuickDraw_Large_C") { ism = "Sarsor(AR)"; }
	else if (LootIsmý == "Item_Attach_Weapon_Magazine_ExtendedQuickDraw_SniperRifle_C") { ism = "Sarsor(SR)"; }


	else if (LootIsmý == "Item_Attach_Weapon_Upper_Aimpoint_C") { ism = "2x"; }
	else if (LootIsmý == "Item_Attach_Weapon_Upper_ACOG_01_C") { ism = "4x"; }
	else if (LootIsmý == "Item_Attach_Weapon_Upper_CQBSS_C") { ism = "8x"; }

	else if (LootIsmý == "Item_Attach_Weapon_Upper_DotSight_01_C") { ism = "Reddot"; }

	return ism;

}
FTransform GetBoneIndex(DWORD_PTR mesh, int index)
{
	DWORD_PTR bonearray = mem->RPM<DWORD_PTR>(mesh + 0x960, 0x8);
	return mem->RPM<FTransform>(bonearray + (index * 0x30), sizeof(FTransform));
}
Vector3 GetBoneWithRotation(DWORD_PTR mesh, int id)
{
	FTransform bone = GetBoneIndex(mesh, id);
	FTransform ComponentToWorld = mem->RPM<FTransform>(mesh + 0x280, sizeof(FTransform));
	D3DMATRIX Matrix;
	Matrix = MatrixMultiplication(bone.ToMatrixWithScale(), ComponentToWorld.ToMatrixWithScale());
	return Vector3(Matrix._41, Matrix._42, Matrix._43);
}

//DÝÐER ENTÝTYLER
#pragma endregion





#pragma region Drawlar
void DrawSkeleton(DWORD_PTR mesh)
{
	Vector3 neckpos = GetBoneWithRotation(mesh, Bones::neck_01);
	Vector3 pelvispos = GetBoneWithRotation(mesh, Bones::pelvis);
	Vector3 previous(0, 0, 0);
	Vector3 current, p1, c1;
	for (auto a : skeleton)
	{
		previous = Vector3(0, 0, 0);
		for (int bone : a)
		{
			current = bone == Bones::neck_01 ? neckpos : (bone == Bones::pelvis ? pelvispos : GetBoneWithRotation(mesh, bone));
			if (previous.x == 0.f)
			{
				previous = current;
				continue;
			}
			p1 = WorldToScreen(previous, GetCameraCache());
			c1 = WorldToScreen(current, GetCameraCache());


			DrawLine(p1.x, p1.y, c1.x, c1.y, D3DCOLOR_ARGB(255, 255, 255, 255));
			previous = current;
		}
	}
}


Vector3 IskeletBul(DWORD_PTR mesh, int i)
{
	if (!mem) { return{ 0,0,0 }; }
	return WorldToScreen(GetBoneWithRotation(mesh, i), GetCameraCache());
}



void Aimbot(float x, float y)
{
	float ScreenCenterX = (s_width / 2);
	float ScreenCenterY = (s_height / 2);
	float AimSpeed = 1.f;
	float TargetX = 0;
	float TargetY = 0;
	int FOV = 40;

	if (x != 0)
	{
		if (x > ScreenCenterX)
		{
			TargetX = -(ScreenCenterX - x);
			TargetX /= AimSpeed;
			if (TargetX + ScreenCenterX > ScreenCenterX * 2) TargetX = 0;
		}

		if (x < ScreenCenterX)
		{
			TargetX = x - ScreenCenterX;
			TargetX /= AimSpeed;
			if (TargetX + ScreenCenterX < 0) TargetX = 0;
		}
	}

	if (y != 0)
	{
		if (y > ScreenCenterY)
		{
			TargetY = -(ScreenCenterY - y);
			TargetY /= AimSpeed;
			if (TargetY + ScreenCenterY > ScreenCenterY * 2) TargetY = 0;
		}

		if (y < ScreenCenterY)
		{
			TargetY = y - ScreenCenterY;
			TargetY /= AimSpeed;
			if (TargetY + ScreenCenterY < 0) TargetY = 0;
		}
	}


	/////FOV


	mouse_event(MOUSEEVENTF_MOVE, (DWORD)(TargetX), (DWORD)(TargetY), NULL, NULL);

	/////FOV

	return;
}



float DistanceBetweenCross(float X, float Y)
{
	float ydist = (Y - (s_height / 2));
	float xdist = (X - (s_width / 2));
	float Hypotenuse = sqrt(pow(ydist, 2) + pow(xdist, 2));
	return Hypotenuse;
}
















float dis(Vector3 point1, Vector3 point2)
{
	return sqrt((point2.x - point1.x)*(point2.x - point1.x) + (point2.y - point1.y)*(point2.y - point1.y));
}

int isUaz(int id)
{
	for (int i = 0; i < 3; i++)
		if (id == entl.uaz[i])
			return 1;
	return 0;
}

int isDacia(int id)
{
	for (int i = 0; i < 8; i++)
		if (id == entl.dacia[i])
			return 1;
	return 0;
}

int isBuggy(int id)
{
	for (int i = 0; i < 6; i++)
		if (id == entl.buggy[i])
			return 1;
	return 0;
}

int isBike(int id)
{
	for (int i = 0; i < 4; i++)
		if (id == entl.motorbike[i])
			return 1;
	return 0;
}





#pragma endregion



















