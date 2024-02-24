#include <stdio.h>
    void removeExtraSpaces (char *str) {
        int i, j;
        for (i=0, j=0; str[i] !='\0'; i++) {
            if (str[i] != ' ' || (i>0 && str[i-1] != ' ')) {
                str[j++] = str [i];
            }
        }
        str[j] = '\0';
    }

    int main(){
        char s[101];
        fgets(s, 100, stdin);
        removeExtraSpaces(s);
        printf("%s\n", s);
        return 0;
    }
