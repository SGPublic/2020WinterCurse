#include <stdio.h>

int main() {
	float f, c;
	printf("请输入华氏度：");
#pragma warning(suppress : 4996)
	scanf("%f", &f);
	c = f - 32;
	printf("摄氏度为：%f℃", c);

	return 0;
}