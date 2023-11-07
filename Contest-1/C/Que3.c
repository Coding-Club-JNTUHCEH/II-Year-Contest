#include <stdio.h>

int main() {
    int n, h;
    scanf("%d %d", &n, &h);
    int a[n];
    int width = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] <= h) {
            width++;
        } else {
            width += 2;
        }
    }

    printf("%d\n", width);
    return 0;
}
