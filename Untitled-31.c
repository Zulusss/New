#include <stdio.h>

int main(){
char c;
int a,b;
scanf("%c %d %d", &c, &a, &b);

switch (c){
    case '+': printf("%.2f", (double)a+b); break;
    case '-': printf("%.2f", (double)a-b); break;
    case '*': printf("%.2f", (double)a*b); break;
    case '/': printf("%.2f", (double)a/b); break;
    default: printf("ERROR!"); break;
}
return 0;
}