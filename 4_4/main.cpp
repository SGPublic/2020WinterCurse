#include <stdio.h>

int main() {
	printf("�������ַ�����");
	char ch[50];
	int lower_count = 0;
	gets_s(ch, 50);
	for (int i = 0; i < 50; i++) {
		if (ch[i]) {
			if (ch[i] >= 97 && ch[i] <= 122) {
				ch[i] -= 32;
				lower_count++;
			}
		} else {
			break;
		}
	}
	printf("Сд��ĸ���� %d ����ת������ַ���Ϊ��", lower_count);
	puts(ch);

	return 0;
}