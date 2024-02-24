#include <stdio.h>

int main() {
  int d = 0, m = 0, err = 0;

  scanf("%d %d", &d, &m);

  if (m >= 1 && m < 13){
    if (m == 2)
      if (d < 0 || d > 29)
        err = 1;
    
    if (m == 4 || m == 6 || m == 9 || m == 11){
      if (d < 0 || d>30)
        err = 1;
    }

    else{
      if (d < 0 || d > 31){
        err = 1;
        //puts("!!!");
      }
    }
        //err = 1;

     printf("%s", err == 1 ? "error" : "correct");   
  }

  else
    puts("error");

  return 0;
}