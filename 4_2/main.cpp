#include <stdio.h>

int main() {
	int set = 0, i = 0;
	int min;
	while (i < 15) {
		printf("请输入第 %d 个数字：", ++i);
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
	printf("最小的数字为：%d\n", min);

	return 0;
}