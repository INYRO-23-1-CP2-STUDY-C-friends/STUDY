#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	int space, star;
	int line;

	printf("������ �Է��ϼ���: ");
	scanf("%d", &n);

	for (line = 1; line <= n; line++)
	{
		for (space = n-line; space > 0; space--)
			printf(" ");
		for (star = 1; star <= line; star++)
			printf("*");
		printf("\n");
	}

	return 0;
}



