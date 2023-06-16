
/**************Includes***************************/
#include "stdint.h"

/**************Macros*****************************/
#define SUCCESS           (0)
#define ERROR             (-1)
#define INVALID_INPUT     (-2)
#define NULL              ((void *)0)
#ifndef TRUE
 #define TRUE   (1u)
#endif   

#ifndef FALSE
 #define FALSE   (0u)
#endif 

/**************Typedefs*****************************/
typedef unsigned char  boolean;

/**************Bit Operations***********************/

#define GET_BIT_STATUS(reg, bit_idx) (0UL != ((reg) & (1UL<<(bit_idx))))

#define SET_BIT(reg, bit_idx) (reg) |= (1UL<<(bit_idx))

#define CLR_BIT(reg, bit_idx) (reg) &= (~1UL<<(bit_idx))
