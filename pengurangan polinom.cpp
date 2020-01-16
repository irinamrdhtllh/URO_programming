#include <stdio.h>
#include<math.h>

struct poly
{
  float coeff;
  int exp;
};


//declaration of polynomials
struct poly f[100],g[100],c[100],i[100];

int main()
{
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


