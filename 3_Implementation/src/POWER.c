#include <stdio.h>
int main() {
    int x, n;
    long long result = 1;
    printf("Enter a x: ");
    scanf("%d", &x);
    printf("Enter an n: ");
    scanf("%d", &n);

    while (n!= 0) {
        result *= x;
        --n;
    }
    printf("Answer = %lld", result);
    return 0;
}
