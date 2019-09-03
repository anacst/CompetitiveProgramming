#include <stdio.h>

int ordered(int i, char* str) {
	char c = 65 + i;
	for (; str[i]!='\0'; i++, c++)
		if ((str[i] - c) != 0) return i;
	return -1;
}


int main(void) {
	int n, m, i;
	char str[27];
	int err1, err2, aux;
	scanf("%d", &n);

	for(i=0; i<n; i++) {
		scanf("%d %s", &m, str);

		err1 = ordered(0, str);
		err2 = ordered(err1+1, str);

    if (err1 == -1) {
    	printf("There are the chance\n");
			continue;
    }
        
		aux = str[err1];
		str[err1] = str[err2];
		str[err2] = aux;

		if(ordered(0, str) < 0) printf("There are the chance\n");
		else printf("There aren't the chance\n");
	}
	
	return 0;	
}
