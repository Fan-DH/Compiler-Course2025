#include <stdio.h>
int factorial(int n) {
    int i = 2, f = 1;
    while (i <= n) {
        f = f * i;
        i = i + 1;
    }
    return f;
}

int main() {
    int n;
    scanf("%d", &n);
    int result = factorial(n);
    printf("%d\n", result);
    return 0;
}
