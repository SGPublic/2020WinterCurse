#include <stdio.h>

int main() {
	int n;
	printf("����һ������ n:");
#pragma warning(suppress : 4996)
	scanf("%d", &n);
	printf("%s��3����", ((n / 3) * 3 == n ? "��" : "����"));
	return 0;
}