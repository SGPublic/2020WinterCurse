#include <stdio.h>

int main() {
	int a, b, max;
	printf("请输入两个数字：");
#pragma warning(suppress : 4996)
	scanf("%d, %d", &a, &b);
	max = a > b ? a : b;
	printf("较大的数字为：%d\n", max);

	return 0;
}