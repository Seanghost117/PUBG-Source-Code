#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EMovieSceneKeyInterpolation
{
   EMovieSceneKeyInterpolation__Auto = 0,
   EMovieSceneKeyInterpolation__User = 1,
   EMovieSceneKeyInterpolation__Break = 2,
   EMovieSceneKeyInterpolation__Linear = 3,
   EMovieSceneKeyInterpolation__Constant = 4,
   EMovieSceneKeyInterpolation__EMovieSceneKeyInterpolation_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
