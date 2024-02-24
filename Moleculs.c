#include <stdio.h>
#include <math.h>

int main(void){
  int n;
  double x = 3e-23, m = 0.05, s = 249.5, Odin, Nes, OdinMol, NesMol;
  scanf("%d", &n);
  Odin = s/m;
  Nes = n*Odin;
  OdinMol = s/x;
  NesMol = n*OdinMol;
  printf("%.0f %.3e", Nes, NesMol);
  return 0;
}