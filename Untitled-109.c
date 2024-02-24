#include<stdio.h>
int main (){
int a, b, c, d;
scanf("%d %d %d %d", &a, &b, &c, &d);
int u = (a==1)&&(b==0)&&(c==2)&&(d==4);
if (u = 1) printf("open");
else printf("close");
return 0;
}