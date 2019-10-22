#include<stdio.h>
int main()
{
	int c=0, a=0, b=1, j, k;
	printf("how many no u want to print:- ");
	scanf("%d",&k);
	for(j=1; j<=k; j++){
	
	printf("%d ,\b", c);
	a=b;
	b=c;
	c=a+b;
	
   }
}
