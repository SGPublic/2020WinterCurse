#include <stdio.h>

int main() {
	int n;
	printf("输入一个整数 n:");
#pragma warning(suppress : 4996)
	scanf("%d", &n);
	printf("%s被3整除", ((n / 3) * 3 == n ? "能" : "不能"));
	return 0;
}