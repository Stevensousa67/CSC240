#include <stdio.h>

int main() {
    int x, y, sum;
    printf("Enter two digits to add:\n");
    scanf("%d %d", &x, &y);
    sum = x + y;
    printf("%d + %d = %d", x, y, sum);
    return 0;
}
