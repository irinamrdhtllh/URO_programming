#include <stdio.h>

int main() {
	int n, i, j, k, b, k1;
	int a[100];
	printf("Masukkan derajat tertinggi polinom P(x) : ");
	scanf("%d", &n);
	
	for (i = 0; i <= n; i++){
		printf("Koefisien x^%d = ", i);
		scanf("%d", &a[i]);
	}
	
	printf("Polinom P(x) yang diinput adalah : \n");
	
	for (k = 0; k <= n; k++) {
		if(k != 0) {
			if (k == 1) {
				if (a[k] != 0) {
					if (a[k] == 1){
						printf("x");
					}
					else{
						printf("%dx", a[k]);
					}
				}
				else {
					continue;
				}
			}
			else {
				if (a[k] == 0){
					continue;
				}
				else {
					if (a[k] == 1){
						printf("x^%d", k);
					}
					else {
						printf("%dx^%d", a[k], k);
					}
				}
			}
		}
		else if(k == 0){
			printf("%d", a[k]);
		}	
		
		if (k < n){
			printf(" + ");
		}
	}
	
	printf("\nBanyaknya penurunan yang diinginkan (terhadap x) : \n");
	scanf("%d", &b);
	
	
	k = n;
	k1 = b;
	int p = 0;
	while (b != 0) {
		for (j = p; j <= k ; j++) {
			a[j] = (j-p)*a[j];
		}
		p++;
		b--;
	}
	
	printf("\nTurunan ke-%d polinomial P(x) adalah : \n", k1);
	for (j = 1; j <= n; j++) {
		if (a[j] != 0 && j == 1) {
			printf("%d", a[j]);
		}
		else if (a[j] != 0 && j > 1) {
			if (j - 1 == 1){
				printf("%dx",a[j] );
			}
			else if (j - 1 > 1) {
				if (j-p == 0){
					printf("%d", a[j]);
				}
				else if (j-p > 0) {
					if (j-p == 1){
					printf("%dx", a[j]);
					}
					else if (j-p > 1) {
						printf("%dx^%d", a[j], j-p);
					}
				}
			}
		}
		
		if (j < n) {
			if (a[j] == 0){
				continue;
			}
			else {
			printf(" + ");
			}
		}
	}
	
	if (k1 > n){
		printf("0");
	}	
}
