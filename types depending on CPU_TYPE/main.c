#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "MicroChip_Types.h"

uint8 var1=1;
uint16 var2=1;
uint32 var3=1;
uint64 var4=1;
sint8 var5=1;
sint16 var6=1;
sint32 var7=1;
sint64 var8=1;
float32 var9=1.0;
float64 var10=1.0;
int main (void){
    printf("uint8  =%i bytes \n",sizeof(var1));
    printf("uint16 =%i bytes \n",sizeof(var2));
    printf("uint32 =%i bytes \n",sizeof(var3));
    printf("uint64 =%i bytes \n",sizeof(var4));
    printf("sint8  =%i bytes \n",sizeof(var5));
    printf("sint16 =%i bytes \n",sizeof(var6));
    printf("sint32 =%i bytes \n",sizeof(var7));
    printf("sint64 =%i bytes \n",sizeof(var8));
    printf("float32=%i bytes \n",sizeof(var9));
    printf("float64=%i bytes \n",sizeof(var10));
}
