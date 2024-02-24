    #include<stdio.h>
    #include<math.h>
    int main (){

    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    if (fabs(x1)+fabs(y1)>fabs(x2)+fabs(y2)) printf("2");
    elseif (!((fabs(x1)+fabs(y1)>fabs(x2)+fabs(y2)))) printf("1");
    else printf ("0");
   
    return 0;
    }