#include <stdio.h>

int main() {
	int result, i, n;
	printf("����������n��");
#pragma warning(suppress : 4996)
	scanf("%d", &n);

	i = 0; result = 0;
	while (i < n) {
		result += i + 1;
		i++;
	}
	printf("while�����%d\n", result);

	i = 0; result = 0;
	do {
		result += i + 1;
		i++;
	} while (i < n);
	printf("do_while�����%d\n", result);

	i = 0; result = 0;
	for (; i < n; i++) {
		result += i + 1;
	}
	printf("for�����%d\n", result);

	return 0;
}