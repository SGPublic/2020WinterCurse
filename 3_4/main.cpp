#include <stdio.h>

int main() {
	int a, b, max;
	printf("�������������֣�");
#pragma warning(suppress : 4996)
	scanf("%d, %d", &a, &b);
	max = a > b ? a : b;
	printf("�ϴ������Ϊ��%d\n", max);

	return 0;
}