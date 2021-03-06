#include <stdio.h>

void printPolynom(int poly[], int num);

int main()
{
	int a, b, c, i, j, n, m;
    	int f[100], g[100], result[100];

    	printf("Masukkan derajat tertinggi polinom f: ");
    	scanf("%d", &n);
    	for (i = 0; i <= n; ++i){
        	printf("Masukkan koefisien x^%d: ", i);
        	scanf("%d", &f[i]);
   	}

    	printf("Polinom pertama adalah: ");
    	printPolynom(f, n);

    	printf("\nMasukkan derajat tertinggi polinom g: ");
    	scanf("%d", &m);
    	for (j = 0; j <= m; ++j){
        	printf("Masukkan koefisien x^%d: ", j);
        	scanf("%d", &g[j]);
    	}

    	printf("Polinom kedua adalah: ");
    	printPolynom(g, m);

    	for (c = 0; c <= (n+m); ++c){
        	result[c] = 0;
    	}

    	for (a = 0; a <= n; ++a){
        	for (b = 0; b <= m; ++b){
            		result[a+b] += f[a]*g[b];
        	}
   	}

    	printf("\nHasil perkalian kedua polinom adalah: ");
    	printPolynom(result, (m+n));

    	return 0;
}

void printPolynom(int poly[], int num)
{
	int k;

    	for (k = 0; k <= num; ++k){
		printf("%d", poly[k]);
		if (k != 0){
			if (k == 1){
				printf("x");
			}
			else{
				printf("x^%d", k);
			}
		}
		if (k < num){
			printf(" + ");
		}
	}		
}
