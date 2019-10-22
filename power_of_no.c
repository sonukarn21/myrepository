#include<stdio.h>
int power(int n, int b);
int main()
{
	int n,b;
	printf("enter the no which power u want: ");
	scanf("%d",&n);
	printf("\nenter the base: ");
	scanf("%d",&b);
	printf("%d",power(n,b));
	
}
int power(int n, int b){
	int sum=1;
	while(b!=0){
		sum=sum*n;
		--b;
	}
}
