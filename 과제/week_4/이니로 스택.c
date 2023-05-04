#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*

push X: ���� X�� ���ÿ� �ִ� �����̴�.
pop: ���ÿ��� ���� ���� �ִ� ������ ����, �� ���� ����Ѵ�. ���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
size: ���ÿ� ����ִ� ������ ������ ����Ѵ�.
empty: ������ ��������� 1, �ƴϸ� 0�� ����Ѵ�.
top: ������ ���� ���� �ִ� ������ ����Ѵ�. ���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.

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