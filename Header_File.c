
#ifndef HEADER_FILE_H
#define HEADER_FILE_H

#define PLAT_FORM PIC_8      //PIC_8   or PIC_16   or PIC_32

#if (PLAT_FORM==PIC_8)
	#define HWREG(_X)           (*((volatile uint_8 *)(_X)))
#elif (PLAT_FORM==PIC_16)
	#define HWREG(_X)           (*((volatile uint_16 *)(_X)))
#elif (PLAT_FORM==PIC_32)
	#define HWREG(_X)           (*((volatile uint_32 *)(_X)))
#else 
	#error "Not suitable Plat form"
#endif

#define LATA  (HWREG(Adress))    /*address from data sheet*/
#endif