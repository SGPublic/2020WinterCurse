#include <stdio.h>

int main() {
	float f, c;
	printf("�����뻪�϶ȣ�");
#pragma warning(suppress : 4996)
	scanf("%f", &f);
	c = f - 32;
	printf("���϶�Ϊ��%f��", c);

	return 0;
}