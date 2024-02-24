#include <stdio.h>

int main(){
    int input;
    int max = 0;
    char check;

    if((scanf("%d%c", &input, &check) == 2) && (check == '\n')){
        if(input < 0){
            input = -input;
        }

        while(input){
            if(max < (input % 10)){
                max = input % 10;
            }
            input = input / 10;
        }

        printf("%d", max);
    } else {
        printf("n/a");
    }

    return 0;
}