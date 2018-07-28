#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ELandscapeLayerPaintingRestriction
{
   ELandscapeLayerPaintingRestriction__None = 0,
   ELandscapeLayerPaintingRestriction__UseMaxLayers = 1,
   ELandscapeLayerPaintingRestriction__ExistingOnly = 2,
   ELandscapeLayerPaintingRestriction__UseComponentWhitelist = 3,
   ELandscapeLayerPaintingRestriction__ELandscapeLayerPaintingRestriction_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
