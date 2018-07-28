#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EBTDecoratorLogic
{
   EBTDecoratorLogic__Invalid = 0,
   EBTDecoratorLogic__Test = 1,
   EBTDecoratorLogic__And = 2,
   EBTDecoratorLogic__Or = 3,
   EBTDecoratorLogic__Not = 4,
   EBTDecoratorLogic__EBTDecoratorLogic_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
