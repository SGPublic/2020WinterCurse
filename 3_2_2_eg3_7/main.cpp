#include <stdio.h>

int main() {
	//方法一
	int a1, b1;
	printf("please input a b:");
#pragma warning(suppress : 4996)
	scanf("%d %d", &a1, &b1);
	printf("a = %d, b = %d\n", a1, b1);

	printf("\n\n");

	//方法二
	int a2, b2;
	char ab[3];
	printf("please input a b:");
	gets_s(ab);
	a2 = (int)ab[0];
	b2 = (int)ab[2];
	printf("a = %c, b = %c\n", ab[0], ab[2]);

	return 0;
}