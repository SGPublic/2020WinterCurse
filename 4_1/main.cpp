#include <stdio.h>

int main() {
	int odd_array[10];
	int even_array[10];

	int* odd_input_index = odd_array;
	int* even_input_index = even_array;
	int odd_count = 0, even_count = 0;

	int i_i = 0;
	while (i_i < 10) {
		printf("������� %d ������", ++i_i);

		int int_input;
#pragma warning(suppress : 4996)
		scanf("%d", &int_input);

		if (int_input % 2 == 0) {
			*even_input_index = int_input;
			even_input_index++;
			odd_count++;
		} else {
			*odd_input_index = int_input;
			odd_input_index++;
			even_count++;
		}
	}

	printf("������ %d ����", odd_count);
	for (int odd_output_index = 0; odd_output_index < odd_count; odd_output_index++) {
		if (odd_output_index != 0) {
			printf(", ");
		}
		printf("%d", odd_array[odd_output_index]);
	}
	printf("\n");

	printf("ż���� %d ����", even_count);
	for (int even_output_index = 0; even_output_index < even_count; even_output_index++) {
		if (even_output_index != 0) {
			printf(", ");
		}
		printf("%d", even_array[even_output_index]);
	}
	printf("\n");

	return 0;
}