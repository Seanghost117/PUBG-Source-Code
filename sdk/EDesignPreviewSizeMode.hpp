#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EDesignPreviewSizeMode
{
   EDesignPreviewSizeMode__FillScreen = 0,
   EDesignPreviewSizeMode__Custom = 1,
   EDesignPreviewSizeMode__CustomOnScreen = 2,
   EDesignPreviewSizeMode__Desired = 3,
   EDesignPreviewSizeMode__DesiredOnScreen = 4,
   EDesignPreviewSizeMode__EDesignPreviewSizeMode_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
