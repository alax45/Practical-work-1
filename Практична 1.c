#include <stdio.h>

int main() {
    int t1, t2, t3;
    float total_time;

    // Зчитування вхідних даних
    scanf("%d %d %d", &t1, &t2, &t3);

    // Розрахунок загального часу
    total_time = 1.0 / t1 + 1.0 / t2 + 1.0 / t3;

    // Виведення результату
    printf("%.2f\n", 1 / total_time);

    return 0;
}
