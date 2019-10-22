#include<stdio.h>
int sum_off_no(int n);
int main()
{
	int  n;
	printf("enter the no: ");
	scanf("%d",&n);
	if(n<sum_of_no(n))
		printf("given no is abundent number");
	else
		printf("given number is not abundent number");
}
int sum_of_no(int n)
{
	int i=1,sum=0;
	while(i>=n){
		if(n%i==0){
		
		sum= sum+i;
	}
		i++;
	}
}
