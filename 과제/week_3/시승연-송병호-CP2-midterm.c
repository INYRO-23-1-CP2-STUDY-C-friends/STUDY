#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 5. (1) 두 정수 x, y에 대하여 최대공약수를 계산한 후 반환하는 함수를 작성하라.

int main()
{
    // x, y 선언 및 입력받기
    int x, y;
    printf("===정수 x, y의 최대공약수 계산기===\n");
    printf("x 입력: ");
    scanf("%d", &x);
    printf("y 입력: ");
    scanf("%d", &y);

    // 최대공약수 변수 G 선언, 0으로 초기화
    int G = 0;

    // 먼저 x와 y의 크기를 비교하고, for i = 1부터 i <= (x와 y중 작은 숫자) 일 때까지 반복

    int min = x;

    if (x > y)
        min = y;
        
    for (int i = 0; i <= min; i++)  
        if (x % i == 0 && y % i == 0) // 만약 x % i == 0 && y % i == 0이면
            G = i; // 최대공약수에 i 저장

    // 결과 출력
    printf("%d와 %d의 최대공약수는 %d 입니다.", x, y, G);
    return 0;
}