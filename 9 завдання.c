#include <stdio.h>

int minSteps(int x, int y) {
    if (x == y) {
        return 0;
    }
    
    int diff = y - x;
    int steps = 0;
    
    if (diff > 0) {
        if (diff % 2 == 0) {
            steps = 2;
        } else {
            steps = 3;
        }
    } else {
        steps = 1;
    }
    
    return steps;
}

int main() {
    int x = 45;
    int y = 48;
    int steps = minSteps(x, y);
    
    printf("Minimum steps: %d\n", steps);
    
    return 0;
}
