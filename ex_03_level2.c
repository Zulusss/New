#include <stdio.h>

int main(){
    int input;
    int result = 1;
    int max = -1;
    int *mass = (int)malloc(5*sizeof(int));

    while(input != -1){
        if((scanf("%d", &input) == 1) && (input >= -1)){
            if(input > max){
                max = input;
            }
        } else {
            input = -1;
            result = 0;
        }
    }
    if(result){
        printf("%d", max);
    } else {
        printf("n/a");
    }

    return 0;
}