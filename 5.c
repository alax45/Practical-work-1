#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int dp[n+1];
    dp[0] = 1;
    dp[1] = 2;

    for (int i = 2; i <= n; i++) {
        dp[i] = (dp[i-1] + dp[i-2]) % 12345;
    }

    printf("%d\n", dp[n]);

    return 0;
}
