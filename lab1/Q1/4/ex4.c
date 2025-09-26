#include <stdio.h>
#include <math.h> 
int main() {
    int n;
    scanf("%d", &n);
    double fact = tgamma(n + 1);
    printf("%f\n", fact);
    return 0;
}
