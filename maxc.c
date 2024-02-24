#include <stdio.h>

int max(int a, int b);

int main(){
	int x, y;

	printf("Enter two integers\n");
	if (scanf("%d %d", &x, &y) == 2){
		printf("%d\n", max(x, y));
	}
	else
		printf("n/a\n");
	
	return 0;
}

int max(int a, int b){
	return (a > b) ? a : b;
}