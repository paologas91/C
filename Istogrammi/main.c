#include <stdio.h>
#define size 10

int main() {
	int i;
	int j;
	int v[size] = { 3, 5, 3, 4, 1, 6, 3, 2, 1, 3 };

	for (i = 0; i < size; i++) {
		printf("%d%8d |", i, v[i]);
		for (j = 0; j < v[i]; j++) {
			printf(" *");
		}
		printf("\n");
	}

	return 0;
}