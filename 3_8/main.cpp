#include <stdio.h>

int main() {
	int head_count, feet_count;

	printf("���������ͷ�����ܽ�����");
#pragma warning(suppress : 4996)
	scanf("%d, %d", &head_count, &feet_count);

	int answer_count = 0;
	for (int rabbit_count = 0; rabbit_count < head_count; rabbit_count++) {
		int fowl_count = head_count - rabbit_count;
		int feet_count_guess = rabbit_count * 2 + fowl_count * 4;
		if (feet_count_guess == feet_count) {
			printf("�� %d ���𰸣�%dֻ���ӣ�%dֻ��\n", ++answer_count, rabbit_count, fowl_count);
		}
	}
	printf("�� %d ����\n", answer_count);

	return 0;
}