#include <stdio.h>
// 재귀함수, 반복되지만 반복문과는 다름.

int factorial(int n) {
    if (n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main(void) {
    int n = 5;
    printf("%d!= %d\n", n, factorial(n));
    return 0;
}