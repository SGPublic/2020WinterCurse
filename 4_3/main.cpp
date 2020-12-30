#include <stdio.h>

int main() {
	int sum_1_row = 0, sum_3_column = 0;
	for (int row_index = 0; row_index < 4; row_index++) {
		for (int column_index = 0; column_index < 4; column_index++) {
			printf("请输入矩阵第 %d 行、第 %d 列的数字：", row_index + 1, column_index + 1);
			int input;
#pragma warning(suppress : 4996)
			scanf("%d", &input);
			if (row_index == 0) {
				sum_1_row += input;
			}
			if (column_index == 2) {
				sum_3_column += input;
			}
		}
	}
	printf("矩阵第一列的和为：%d，第三列的和为：%d", sum_1_row, sum_3_column);

	return 0;
}