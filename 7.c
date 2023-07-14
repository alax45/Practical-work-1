#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, r1, x2, y2, r2;
    double distance, sumOfRadii;
    int intersectionPoints;

    printf("Введіть координати центру першого кола (x1, y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Введіть радіус першого кола (r1): ");
    scanf("%d", &r1);

    printf("Введіть координати центру другого кола (x2, y2): ");
    scanf("%d %d", &x2, &y2);

    printf("Введіть радіус другого кола (r2): ");
    scanf("%d", &r2);

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    sumOfRadii = r1 + r2;

    if (distance == sumOfRadii) {
        intersectionPoints = 1;
    } else if (distance < sumOfRadii) {
        intersectionPoints = 2;
    } else {
        intersectionPoints = 0;
    }

    printf("Кількість точок перетину: %d\n", intersectionPoints);

    return 0;
}