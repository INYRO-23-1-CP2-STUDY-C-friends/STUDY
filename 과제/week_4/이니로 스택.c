#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*

push X: 정수 X를 스택에 넣는 연산이다.
pop: 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 스택에 들어있는 정수의 개수를 출력한다.
empty: 스택이 비어있으면 1, 아니면 0을 출력한다.
top: 스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.

*/



typedef int element; 
element stack[10001]; 
element count = -1; 
int empty() {
	if (count == -1) 
		return 1;
	else
		return 0;
}
element top() {
	if (empty())
		return -1;
	else
		return stack[count]; 
}
void push(element x) {
	stack[++count] = x; 
}
element pop() {
	if (empty())
		return -1;
	else
		return stack[count--]; 
int size() {
	return count + 1; 
}
int main(void) {
	int N;
	char func[6];
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%s", &func);
		if (strcmp(func, "push") == 0) {
			int num;
			scanf("%d", &num);
			push(num);
		}
		else if (strcmp(func, "pop") == 0) {
			printf("%d\n", pop());
		}
		else if (strcmp(func, "top") == 0) {
			printf("%d\n", top());
		}
		else if (strcmp(func, "size") == 0) {
			printf("%d\n", size());
		}
		else if (strcmp(func, "empty") == 0) {
			printf("%d\n", empty());
		}
	}
	return 0;
}