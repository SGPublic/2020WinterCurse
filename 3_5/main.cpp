#include <stdio.h>

int main() {
	int a, b, c, min;
	printf("�������������֣�");
#pragma warning(suppress : 4996)
	scanf("%d, %d, %d", &a, &b, &c);
	min = a < b ? a : b;
	min = c < min ? c : min;
	printf("��С������Ϊ��%d\n", min);

	return 0;
}