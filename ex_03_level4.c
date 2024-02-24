#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data{
    char firstName[21];
    char lastName[21];
    int height;
};

int main(){
    int n;
    char check;

    if((scanf("%d%c", &n, &check) == 2) && (check == '\n') && (n > 0)){
        struct data *mass = (struct data*)malloc(n * sizeof(struct data));
        int result = 1;

        for(int i = 0; (i < n) && (result == 1); i++){
            char firstName[21];
            char lastName[21];
            int height;

            if((scanf("%s%c", firstName, &check) > 20) || (check != '\n')){
                result = 0;
            } else if((scanf("%s%c", lastName, &check) > 20) || (check != '\n')){
                result = 0;
            } else if((scanf("%d%c", &height, &check) != 2) || (check != '\n') || (height < 1)){
                result = 0;
            } else {
                result = 1;
                strcpy(mass[i].firstName, firstName);
                strcpy(mass[i].lastName, lastName);
                mass[i].height = height;
            }
        }

        if(result){
            int height;
            int count = 0;

            if((scanf("%d%c", &height, &check) == 2) && (check == '\n')){
                for(int i = 0; i < n; i++){
                    if(mass[i].height >= height){
                        if(count++){
                            printf(", ");
                        }
                        printf("%s %s", mass[i].firstName, mass[i].lastName);
                    }
                }

                if(!count){
                    printf("Nothing");
                }
            } else {
                printf("n/a");
            }
        } else {
            printf("n/a");
        }

        free(mass);
    } else {
        printf("n/a");
    }


    return 0;
}