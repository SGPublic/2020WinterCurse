#include <stdio.h>

int main() {
	int set = 0, i = 0;
	int min;
	while (i < 15) {
		printf("������� %d �����֣�", ++i);
		int input;
#pragma warning(suppress : 4996)
		scanf("%d", &input);

		if (set == 0) {
			set = 1;
			min = input;
		} else {
			min = min > input ? input : min;
		}
	}
	printf("��С������Ϊ��%d\n", min);

	return 0;
}