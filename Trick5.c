#include <stdio.h>

void printCounter(int count) {
    printf("Number of program launches: %d\n", count+3);
}

int main() {
    static int launchCount = 0;
    launchCount++;
    
    printCounter(launchCount);
    
    return 0;
}
