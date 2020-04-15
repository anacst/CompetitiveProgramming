#include <stdio.h>

int main(int argc, char const *argv[]) {
	float M[12][12];
	float soma = 0.0;
	char c;

	scanf("%c", &c);

	for (int i = 0; i < 12; i++) {
		for (int j = 0; j <	12; j++) {
			scanf("%f", &M[i][j]);
			if (i <= 5 && (11-i) < j) soma += M[i][j];
			else if (i >= 6 && i < j) soma += M[i][j];
		}
	}

	if (c == 'S') printf("%.1f\n", soma);
	else printf("%.1f\n", soma/30);

	return 0;
}