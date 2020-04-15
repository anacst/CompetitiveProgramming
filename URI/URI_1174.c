#include <stdio.h>

#define TAM 100

int main(int argc, char const *argv[]) {
	float A[TAM];

	for (int i = 0; i < TAM; ++i) {
		scanf("%f", &A[i]);
		if (A[i] <= 10)
			printf("A[%d] = %.1f\n", i, A[i]);
	}

	return 0;
}