#include <stdio.h>

int main(void){
  
  char k = 0;
  //printf("\n",k);

  for(int i = 0; i < 256; i++){
    k = i;
    printf("k=%c при i=%d\n", k, i);
  }

  return 0;
}