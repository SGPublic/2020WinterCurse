#include <stdio.h>

int main() {
	int sum_1_row = 0, sum_3_column = 0;
	for (int row_index = 0; row_index < 4; row_index++) {
		for (int column_index = 0; column_index < 4; column_index++) {
			printf("���������� %d �С��� %d �е����֣�", row_index + 1, column_index + 1);
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
	printf("�����һ�еĺ�Ϊ��%d�������еĺ�Ϊ��%d", sum_1_row, sum_3_column);

	return 0;
}