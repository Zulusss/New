#include <stdio.h>

int main() {
    int x, y;
//    n = x/y;
    scanf("%d %d", &x, &y);
        switch (x-y){
            case 0:; 
                switch (x+1){
                    case 0: printf("3\n"); break;
                    case 1: printf("o-la-la"); break;
                    case 2: printf("1\n"); break;
                    default: switch (y+1){
                                case 0: printf("ne zaebis2\n"); break;
                                case 1: printf("o-la-la"); break;
                                case 2: printf("zaebis+2\n"); break;
                                default: printf("Mihalich");
                                }
                    }
            case 1: printf("ebat menya ebat"); break;
            default: switch (y+1){
                                case 0: printf("4\n"); break;
                                case 1: printf("o-la-la"); break;
                                case 2: printf("2\n"); break;
                                default: printf("Mihalich");
                                }
            }
//    printf("n=%d\n", n);
  // put your code here
  return 0;
}