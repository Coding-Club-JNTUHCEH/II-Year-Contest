// Approach -> Given, the positions of two hunters and a rabbit. We need to find absolute value of distance b/w hunters and rabbit, and compare them.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    int a = abs(x - z);
    int b = abs(y - z);
    if (a == b)
        printf("C");
    else if (a > b)
        printf("B");
    else
        printf("A");
    return 0;
}
