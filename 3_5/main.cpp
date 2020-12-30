#include <stdio.h>

int main() {
	int a, b, c, min;
	printf("请输入三个数字：");
#pragma warning(suppress : 4996)
	scanf("%d, %d, %d", &a, &b, &c);
	min = a < b ? a : b;
	min = c < min ? c : min;
	printf("较小的数字为：%d\n", min);

	return 0;
}