#include <stdio.h>
#include <math.h>

void printPolynom(int poly[], int num);

struct poly
{
	float coeff;
	int exp;
};


struct poly f[100],g[100],c[100],i[100];

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

int main(){
	int a;
	while (a < 1 || a > 4){
		printf("Operasi polinom yang diinginkan : \n");
		printf("1. Penjumlahan polinom \n");
		printf("2. Pengurangan polinom \n");
		printf("3. Perkalian polinom \n");
		printf("4. Turunan polinom \n");
		scanf("%d", &a);
	}
	
	if (a == 1){
		int i;
 		int deg1,deg2;      
 		int k=0,l=0,m=0;
 		printf("Masukkan derajat tertinggi polinomial f:");
 		scanf("%d",&deg1);
 
		for(i=0;i<=deg1;i++) {
 			printf("Masukkan koefisien x^%d :",i);
    		scanf("%f",&f[i].coeff);
	
	
	f[k++].exp = i;
 }


  printf("\nFungsi f adalah = %.1f",f[0].coeff);
  for(i=1;i<=deg1;i++)
  {
    printf("+ %.1fx^%d",f[i].coeff,f[i].exp);
  }   
 
 
 printf("\nMasukkan derajat tertinggi polinomial g:");
 scanf("%d",&deg2);
 
 for(i=0;i<=deg2;i++)
 { 
       printf("\nMasukkan nilai koefisien x^%d :",i);
       scanf("%f",&g[i].coeff);
	   
	   g[l++].exp = i;
 }

 
  

  printf("\nFungsi g adalah = %.1f",g[0].coeff);
   for(i=1;i<=deg2;i++)
    {
      printf("+ %.1fx^%d",g[i].coeff,g[i].exp);
    }


	
 if(deg1>deg2)
    {
		 for(i=0;i<=deg2;i++)
		  {
			c[m].coeff = f[i].coeff + g[i].coeff;
			c[m].exp = f[i].exp;
			m++;
		  }
		  
		  for(i=deg2+1;i<=deg1;i++)
		  {
			c[m].coeff = f[i].coeff;
			c[m].exp = f[i].exp;
			m++;
		  }

    }
 else
  {
    for(i=0;i<=deg1;i++)
     {
       c[m].coeff = f[i].coeff + g[i].coeff;
       c[m].exp = f[i].exp;
       m++;
     }
    
	for(i=deg1+1;i<=deg2;i++)
    {
      c[m].coeff = g[i].coeff;
      c[m].exp = g[i].exp;
      m++;
    }
  }
  
  
  
 
  printf("\nHasil penjumlahan  = %.1f",c[0].coeff);
  for(i=1;i<m;i++)
  {
     printf("+ %.1fx^%d",c[i].coeff,c[i].exp);
   }	 
 
  return 0;

}
	
	else if (a == 2){
		int i;
 int deg1,deg2;      
 int k=0,l=0,m=0;
 
 
 printf("Masukkan derajat tertinggi polinomial f:");
 scanf("%d",&deg1);
 
 
 for(i=0;i<=deg1;i++)
 {
 
    
    printf("Masukkan koefisien x^%d :",i);
    scanf("%f",&f[i].coeff);
	
	
	f[k++].exp = i;
 }


  printf("\nFungsi f adalah = %.1f",f[0].coeff);
  for(i=1;i<=deg1;i++)
  {
    printf("+ %.1fx^%d",f[i].coeff,f[i].exp);
  }   
 
 
 printf("\nMasukkan derajat tertinggi polinomial g:");
 scanf("%d",&deg2);
 
 for(i=0;i<=deg2;i++)
 { 
       printf("\nMasukkan nilai koefisien x^%d :",i);
       scanf("%f",&g[i].coeff);
	   
	   g[l++].exp = i;
 }

  printf("\nFungsi g adalah = %.1f",g[0].coeff);
   for(i=1;i<=deg2;i++)
    {
      printf("+ %.1fx^%d",g[i].coeff,g[i].exp);
    }


	
 if(deg1>deg2)
    {
		 for(i=0;i<=deg2;i++)
		  {
			c[m].coeff = f[i].coeff - g[i].coeff;
			c[m].exp = f[i].exp;
			m++;
		  }
		  
		  for(i=deg2+1;i<=deg1;i++)
		  {
			c[m].coeff = f[i].coeff;
			c[m].exp = f[i].exp;
			m++;
		  }

    }
 else
  {
    for(i=0;i<=deg1;i++)
     {
       c[m].coeff = f[i].coeff - g[i].coeff;
       c[m].exp = f[i].exp;
       m++;
     }
    
	for(i=deg1+1;i<=deg2;i++)
    {
      c[m].coeff = -g[i].coeff;
      c[m].exp = g[i].exp;
      m++;
    }
  }
  
  
  
 
  printf("\nHasil pengurangan = %.1f",c[0].coeff);
  for(i=1;i<m;i++)
  {
     printf("+ %.1fx^%d",c[i].coeff,c[i].exp);
   }	 
 
  return 0;

}

	else if (a == 3) {
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

	else if (a == 4) {
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
}

	

