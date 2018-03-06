#include <stdio.h>
#include <stdint.h>
int main(){
  union {
    uint8_t i;
  int16_t j;
  } k;
  k.i = 128;
  printf("%d",k.j);
	
}
