#include <stdio.h>

// Функція для знаходження НСД (найбільшого спільного дільника)
int findGCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return findGCD(b, a % b);
}

// Функція для знаходження НСК (найменшого спільного кратного)
int findLCM(int a, int b) {
    int gcd = findGCD(a, b);
    return (a * b) / gcd;
}

int main() {
    int p; // кількість чисел
    scanf("%d", &p);

    int numbers[p];
    for (int i = 0; i < p; i++) {
        scanf("%d", &numbers[i]);
    }

    int lcm = numbers[0];
    for (int i = 1; i < p; i++) {
        lcm = findLCM(lcm, numbers[i]);
    }

    printf("%d\n", lcm);

    return 0;
}

