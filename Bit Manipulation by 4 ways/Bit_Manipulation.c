
#define _XTAL_FREQ 4000000                    /* Important defination */
#include "Application.h"
#define HWREG8(_x) (*((volatile unsigned char *)(_x)))
#define LATC (HWREG8(0XF8B))
#define TRISC (HWREG8(0XF94))

/*fourth way */
#define set_bit(Reg,bit_postion)          (Reg       |=   (1<<bit_postion))
#define clear_bit(Reg,bit_postion)        (Reg       &=  ~(1<<bit_postion))
#define toggle_bit(Reg,bit_postion)        (Reg      ^=   (1<<bit_postion))
int main() {
    
    
    TRISC = 0x00; 
    LATC = 0X00;   
    while(1){
	

	/* Start First way */
	
	LATC = 0x33;            /*0011 0011 */
	__delay_ms(1000);
	LATC = 0xFF;   
	__delay_ms(1000);
	LATC &= ~0xFF;   
	__delay_ms(1000);
	LATC = 0xFF; 
	__delay_ms(1000);

	/*End  First way */
	
	
	/* Start Second way */
	
	 LATC |= (  (_LATC_LATC0_POSITION)  |     (_LATC_LATC1_POSITION)   );
	 __delay_ms(1000);
	 LATC &= ~(     (_LATC_LATC0_POSITION)    |    (_LATC_LATC1_POSITION)   );
	__delay_ms(1000);
	LATC  ^=   (     (_LATC_LATC0_POSITION)    |    (_LATC_LATC1_POSITION)   );
	__delay_ms(1000);
	
	/*End  Second way */
	
	
	
	/* Start Third way */

	__delay_ms(1000);
	LATC = LATC |          (1<< _LATC_LATC0_POSITION) ;
	__delay_ms(1000);
	LATC = LATC &      ~(1<< _LATC_LATC0_POSITION) ;
	__delay_ms(1000);
	LATC = LATC ^         (1<< _LATC_LATC0_POSITION) ;
	__delay_ms(1000);

	/*End  Third way */
	
	
	/* Start Fourth way */
	
	TRISC =0x00;
	LATC = 0x00;
	__delay_ms(1000);
	set_bit(LATC,1);
	__delay_ms(1000);
	clear_bit(LATC,1);
	__delay_ms(1000);
	toggle_bit(LATC,1);
	__delay_ms(1000);	
	
	

	/* End Fourth way */
       
    }
    
    return (EXIT_SUCCESS);
}



