#include<stdio.h>
int main()
{
	int n;
	printf("enter the no:");
	scanf("%d",&n);
	
	if(n*n%10==n)
		printf("given no is automorphic number");
	else
		printf("given no is not automorphic number");
}
