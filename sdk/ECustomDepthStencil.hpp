#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ECustomDepthStencil
{
   ECustomDepthStencil__Disabled = 0,
   ECustomDepthStencil__Enabled = 1,
   ECustomDepthStencil__EnabledOnDemand = 2,
   ECustomDepthStencil__EnabledWithStencil = 3,
   ECustomDepthStencil__ECustomDepthStencil_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
