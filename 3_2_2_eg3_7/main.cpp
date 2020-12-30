#include <stdio.h>

void method_1();
void method_2();
void swap(int* a, int* b);

int main() {
	printf("方法一：\n");
	method_1();

	printf("方法二：\n");
	method_2();

	return 0;
}


//方法一
void method_1() {
	int a, b;

	printf("please input a b:");
#pragma warning(suppress : 4996)
	scanf("%d %d", &a, &b);
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("a = %d, b = %d\n\n", a, b);
}

//方法二
void method_2() {
	int a, b;

	printf("please input a b:");
#pragma warning(suppress : 4996)
	scanf("%d %d", &a, &b);
	swap(&a, &b);
	printf("a = %d, b = %d\n\n", a, b);
}

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}