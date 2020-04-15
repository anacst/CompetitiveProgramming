#include "stdio.h"

int main(int argc, char const *argv[]) {
	int a, b, i, p, n;
	int pares[5], impares[5];

	i = 0; p = 0;

	for (a = 0; a < 15; a++) {
		scanf("%d", &n);

		if (n%2) {
			impares[i] = n;
			i++;
		} else {
		    pares[p] = n;
			p++;
		}
		
		if (i == 5) {
			b = 0;
			while (b < 5) { printf("impar[%d] = %d\n", b, impares[b]); b++; }
			i = 0;
		}
		
		if (p == 5) {
			b = 0;
			while (b < 5) { printf("par[%d] = %d\n", b, pares[b]); b++; }
			p = 0;
		}
	}
		
	b = 0;
	while (b < i) { printf("impar[%d] = %d\n", b, impares[b]); b++; }

	b = 0;
	while (b < p) { printf("par[%d] = %d\n", b, pares[b]); b++; }

	return 0;
}