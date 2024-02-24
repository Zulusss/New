#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int mass[n];

    // Ввод значений в массив
    for (int i = 0; i < n; i++) {
        scanf("%d", &mass[i]);
    }
    if (mass[0]==mass[n-1] && mass[1]==mass[n-2])
        printf ("YES");
        else printf ("NO");
  return 0;         
        }
