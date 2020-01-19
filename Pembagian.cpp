#include <stdio.h>
#include<math.h>

struct poly {
	float coeff;
	int exp;
};

//declaration of polynomials
struct poly f[100], g[100]; //fungsi 1 dan fungsi 2
struct poly result[100], temp[100];

int main() {
	int deg1, deg2;    
	int x;
	
	printf("Masukkan derajat tertinggi polinomial f:");
	scanf("%d",&deg1);
	
	for(int i = 0;i<=deg1;i++) {
		printf("Masukkan koefisien x^%d :",i);
		scanf("%f",&f[i].coeff);
		f[i].exp = i;
	}
	
	printf("\nFungsi f adalah = %.1fx^%d", f[deg1].coeff, f[deg1].exp);
	for(int i=(deg1-1); i>=0; i--) {
		printf(" + %.1fx^%d",f[i].coeff,f[i].exp);
	}   
	
	printf("\n\nMasukkan derajat tertinggi polinomial g:");
	scanf("%d",&deg2);
	
	if (deg2 >= deg1) {
		printf("Error: derajat polinom g harus < polinom f");
		return 0;
	} else {
		for(int i = 0; i <= deg2;  i++) { 
			printf("Masukkan nilai koefisien x^%d :", i);
			scanf("%f",&g[i].coeff);
			g[i].exp = i;
		}
		
		printf("\nFungsi g adalah = %.1fx^%d",g[deg2].coeff, g[deg2].exp);
		for(int i=(deg2-1); i >= 0; i--) {
			printf(" + %.1fx^%d",g[i].coeff,g[i].exp);
		}
		
		for(int i = 0; i < (deg1-deg2+1); i++) {
			//pembagian coef pertama dari kedua fungsi 
			result[i].coeff = f[deg1-i].coeff / g[deg2].coeff;
			result[i].exp = f[deg1-i].exp - g[deg2].exp;
			
			//perkalian c dengan g
			for (int j = 0; j <= deg2; j++) {
				temp[j].coeff = 0;
				temp[j].exp = 0;
			}
			for (int j = 0; j <= deg2; j++) {
				temp[j].coeff = result[i].coeff * g[j].coeff;
				temp[j].exp = result[i].exp + g[j].exp;
			}
			
			//pengurangan fungsi f dengan result
			for (int j = 0; j <= (deg1 - i); j++) {
				for (int k = 0; k <= deg2; k++) {
					if (f[j].exp == temp[k].exp) {
						f[j].coeff = f[j].coeff - temp[k].coeff;
					}
				}
			}
			
			x=i;
		}
		
		printf("\n");
		
		//print hasil pembagian
		if (result[0].exp == 0) {
			printf("\n\nHasil Pembagian = %.1f", result[0].coeff);
		} else {
			printf("\n\nHasil Pembagian = %.1fx^%d", result[0].coeff, result[0].exp);	
		}
		for (int j = 1; j <= (deg1-deg2); j++) {
			if (result[j].exp == 0) {
				printf(" + %.1f",result[j].coeff, result[j].exp);
			} else {
				printf(" + %.1fx^%d",result[j].coeff, result[j].exp);	
			}
		}
		
		//print sisa
		if (f[0].exp == 0) {
			printf("\nSisa Pembagian = %.1f",f[deg1 - x - 1].coeff);
		} else {
			printf("\nSisa Pembagian = %.1fx^%d",f[deg1 - x - 1].coeff, f[deg1 - x - 1].exp);
		}
		for (int j = (deg1 - x - 2); j >= 0; j--) {
			if (f[0].exp == 0) {
				printf("+ %.1f", f[j].coeff);
			} else {
				printf("+ %.1fx^%d", f[j].coeff, f[j].exp);
			}
		}
	}
}

