#include <stdio.h>

int countNumbers(int r) {
    if (r == 1)
        return 2;
    else if (r == 2)
        return 3;
    else {
        int a = 2; // кількість чисел із 1 розрядом
        int b = 3; // кількість чисел із 2 розрядами
        int result;

        for (int i = 3; i <= r; i++) {
            result = a + b;
            a = b;
            b = result;
        }

        return result;
    }
}

int main() {
    int r;
    printf("Введіть розрядність р: ");
    scanf("%d", &r);

    int count = countNumbers(r);
    printf("Кількість чисел із %d розрядами: %d\n", r, count);

    return 0;
}