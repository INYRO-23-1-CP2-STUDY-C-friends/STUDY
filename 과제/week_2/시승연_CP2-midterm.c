// 미완성 정말정말 미안합니다..
// 곧 마저 작성해서 올리도록 하겠습니다!!


// 백윤철 교수님
// C프로그래밍2 중간시험 문제풀이

// 입력한 정수를 소인수 분해하여 결과를 내는 프로그램
/*
#include <stdio.h>


int* FindPrimeNumber(n)
{
    static int primeList[];

    int try = 0;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++)
            if (i % j == 0)
                break;
            else
                primeList[try] = i;
                try += 1;

    return primeList;
                
}

int main()
{
    int n;
    int quotient;
    int remainder;
    int try = 0;
    int result[];

    printf("소인수분해할 값을 입력하세요:\n ");
    scanf("%d", &n);
    int n1 = n;

    int* primeNumbers = FindPrimeNumber(n);

    for (int i = 0; i <= sizeof(primeNumbers); i++)
        if (n % i == 0)
            n == n / i;
            result[try] = i;
            try += 1;
    
    printf("%d(을)를 소인수분해한 결과는 다음과 같습니다:\n", n1);

    for (int j = 0; j <= sizeof(result); j++)
        printf("%d x", result[j]);

}
*/



// 8번
/*
#include <stdio.h>

int a[][5] = {{1, 2, 3, 4, 5},{6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20},{21, 22, 23, 24, 25}};


*/
