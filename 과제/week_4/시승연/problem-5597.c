// 백준 #5597 과제 안 내신 분..?


//교실의 학생 수는 30명, 학생 명부엔 각 학생별로 1번 ~ 30번까지 출석번호가 붙어 있음.
//교수님이 내준 특별과제를 28명이 제출했는데, 그 중에서 제출 안 한 학생 2명의 출석번호를 구하는 프로그램을 작성하시오.

//입력 : 28줄 (각 제출자의 출석번호가 한 줄에 하나씩 주어짐, 중복은 없음)
//출력 : 2줄 (1번째: 제출하지 않은 학생1, 학생2(출석번호 순))

//어떻게 해결해야 할까?
//크기가 30인 배열을 만들어 학생 번호 저장, 입력을 받아 하나씩 search 후 삭제(좌로밀착)

#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int studentArr[30]; // 학생 번호를 저장할 배열(studentArr) 선언

void deleteStudent(int stdNum) // 입력받은 번호 삭제 함수
{
    int idx = -1; // index를 -1로 초기화 및 선언

    for (int i = 0; i < sizeof(studentArr) / sizeof(int); i++) //i = 0 ~ 배열 항목 개수(배열의 크기 = int byte * 배열 항목 개수이므로 int size로 나눠줌)
    {
        if (studentArr[i] == stdNum) // 배열의 시작점부터 검사 시작 -> 입력 번호와 일치 시 idx에 해당 위치를 저장하고 break
        {
            idx = i;
            break;
        }
    }

    if (idx != -1) { // 삭제 과정: 해당 인덱스 한 칸 뒤의 항목을 해당 인덱스로 덮어쓰기 
        for (int j = idx; j < sizeof(studentArr) / sizeof(int) - 1; j++)
        {
            studentArr[j] = studentArr[j + 1];
        }
        studentArr[sizeof(studentArr) / sizeof(int) - 1] = 0;
    }
}

int main()
{
    for (int i = 0; i < 30; i++) // studentArr 배열을 1~30까지 숫자로 채움
        studentArr[i] = i + 1;

    int StdNum; // 삭제할 학생의 번호(입력받을)

    for (int j = 0; j < 28; j++) // 28번의 입력 loop
    {
        scanf("%d", &StdNum); // 한 번호 입력받고, 바로 delete
        deleteStudent(StdNum);
    }
    
    printf("%d\n", studentArr[0]); // 순서대로 정렬된 배열이므로 대소 비교 없이 남아있는 [0], [1]번째 항목 출력
    printf("%d\n", studentArr[1]);

    return 0;
}
