    #include<stdio.h>
    int main (){

    int x;
    if(scanf("%d", &x) != 1) {
        printf("Error input");
        return 0;
    }           
    if(!(x >= 3 && x <= 11)) 
    printf("x out of [3; 11]\n");
    return 0;
    }