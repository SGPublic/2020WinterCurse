#include <stdio.h>

int main() {
	char ch[50];
	printf("ÇëÊäÈë×Ö·û´®£º");
	gets_s(ch, 50);
	int i = 0;
	while (ch[i] && i < 50) {
		int ch_index = (int)ch[i];
		if (ch_index >= 65 && ch_index <= 90) {
			ch[i] += 32;
		} else if (ch_index >= 97 && ch_index <= 122) {
			ch[i] -= 32;
		}
		i++;
	}
	puts(ch);

	return 0;
}