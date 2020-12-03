#include <stdio.h>

int main() {
	int i, k;
	i = 5;
	k = ++i;
	printf("k = %d, i = %d\n", k, i);
	k = --i;
	printf("k = %d, i = %d\n", k, i);
	k = i++;
	printf("k = %d, i = %d\n", k, i);
	k = i--;
	printf("k = %d, i = %d\n", k, i);
	return 0;
}