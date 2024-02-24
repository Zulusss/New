#include <stdio.h>
#include <string.h>

int main(){
    char input[101];
    char inputc = ' ';

    for(int i = 0;(inputc != '\n') && (i < 101); i++){
        scanf("%c", &inputc);
        if(inputc != '\n'){
            if((inputc >= 'A') && (inputc <= 'Z')){
                input[i] = inputc + 32;
            } else {
                input[i] = inputc;
            }
        }
    }

    if(inputc == '\n'){
        int result = 1;
        int len = strlen(input);

        for(int i = 0; i < len; i++){
            if(((input[i] >= '0') && (input[i] <= '9')) || ((input[i] >= 'A') && (input[i] <= 'Z')) ||
               ((input[i] >= 'a') && (input[i] <= 'z')) || (input[i] == ' ')){
                result = 1;
                if((input[i] >= 'A') && (input[i] <= 'Z')){
                    input[i] += 32;
                }
            } else {
                result = 0;
            }
        }

        if(result){
            int indexbeg = 0;
            int indexend = len - 1;
            int flag = 1;

            while((indexbeg < indexend) && (flag)){
                if(input[indexbeg++] == input[indexend--]){
                    flag = 1;
                } else {
                    flag = 0;
                }
            }

            if(flag){
                printf("Yes");
            } else {
                printf("No");
            }
        } else {
            printf("n/a");
        }
    }

    return 0;
}