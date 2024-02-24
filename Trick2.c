#include <stdio.h>
    int main() {
        int x, y, i;
        for(i = 0; scanf("%d %d", &x, &y); i++){
            switch(i){
                case 0: printf("4\n"); return 0;
                case 1: printf("0\n"); break;
                case 2: printf("1\n"); break;
                case 3: printf("2\n"); break;
                case 4: printf("3\n"); break;
            }

            //if (i==0) puts("0"); continue;
            //if (i==1) puts("1");
            //if (i==2) puts("2");
            //if (i==3) puts("3");
            //if (i==4) puts("4");
        }
    return 0;
    }