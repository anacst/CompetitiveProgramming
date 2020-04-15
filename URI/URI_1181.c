#include <stdio.h>

int main(int argc, char const *argv[]) {
	float M[12][12];
	float soma = 0.0;
	char c;
	int l;

	scanf("%d", &l);
	scanf(" %c", &c);

	for (int i = 0; i < 12; i++)
		for (int j = 0; j <	12; j++) 
			scanf("%f", &M[i][j]);

	for (int j = 0; j < 12; j++)
		soma += M[l][j];

	if (c == 'S') printf("%.1f\n", soma);
	else printf("%.1f\n", soma/12);

	return 0;
}