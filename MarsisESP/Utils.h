//do it as you will here...
void UpdateAddresses();
void CacheNames();


#pragma region PlayerÝþlemleri
Vector3 BenimPozisyonumuBul();
float BenimCanimiBul();
Vector3 BenimEyeLocationumuBul();
DWORD_PTR PlayerControllerCek();
Vector3 LocalAngles();
DWORD_PTR PawnCek();
DWORD_PTR PlayerCameraManagerCek();
bool Playermi(int id);

void Aimbot(float x, float y);
void MouseMove(UINT x, UINT y);
void Circle(int X, int Y, int radius, int numSides, int r, int g, int b,int a);
float dis(Vector3 point1, Vector3 point2);


float DistanceBetweenCross(float X, float Y);




#pragma endregion

#pragma region DiðerOyuncuÝþlemleri 
Vector3 ActorPozisyonuBul(int i);

float ActorCaniniBul(int i);



int isUaz(int id);
int isDacia(int id);
int isBuggy(int id);
int isBike(int id);
#pragma endregion

#pragma region DiðerÝþlemler 
int ActorIDBul(int i);
DWORD_PTR EntityListesiniCek();
DWORD_PTR GetEntity(int i);
int EntitySayisiniCek();
void MouseMove(UINT x, UINT y);
string LootIsmýBul(string LootIsmý);
FCameraCacheEntry GetCameraCache();
#pragma endregion

#pragma region Drawlar 

Vector3 CalcAngle(Vector3 src, Vector3 dst);
void DrawSkeleton(DWORD_PTR mesh);
Vector3 WorldToScreen(Vector3 WorldLocation, FCameraCacheEntry CameraCacheL);
#pragma endregion


DWORD_PTR PlayerStateCek();
DWORD_PTR TakimNumarasiBul(int i);


