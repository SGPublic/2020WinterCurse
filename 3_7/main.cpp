#include <stdio.h>

int main() {
	int n, m;
	printf("«Î ‰»În∫Õm£∫");
#pragma warning(suppress : 4996)
	scanf("%d, %d", &n, &m);

	for (int i_r = 0; i_r < n; i_r++) {
		for (int i_c = 0; i_c < m; i_c++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}