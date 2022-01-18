#include<stdint.h>
#include<stdio.h>

#include "C.c"

extern void B(int64_t);

void A()
{
  int64_t Bit_val;
  scanf("%ld", &Bit_val);
  B(Bit_val);
}




