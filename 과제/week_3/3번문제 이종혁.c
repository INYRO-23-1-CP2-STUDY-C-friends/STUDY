#include <stdio.h>
#pragma warning(disable:4996)

void calculate(int x) {
    int coins[] = { 500, 100, 50, 10 };
    int change[4] = { 0, 0, 0, 0 };
    int i;
    for (i = 0; i < 4; i++) {
        change[i] = x / coins[i];
        x = x % coins[i];
    }
    printf("500원 동전: %d개\n", change[0]);
    printf("100원 동전: %d개\n", change[1]);
    printf("50원 동전: %d개\n", change[2]);
    printf("10원 동전: %d개\n", change[3] + (x > 0 ? 1 : 0));
}

int main() {
    int x;
    printf("돈을 입력하세요: ");
    scanf("%d", &x);
    calculate(x);
    return 0;
}
