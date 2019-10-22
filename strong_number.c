#include<stdio.h>
long int factorial(int n);

int main()
{
	int rem;
	long int sum=0, temp, n;
	printf("enter the no:- ");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		rem=n%10;
		sum += factorial(rem);
		n=n/10;
	}
	if(sum==temp)
	 	printf(" given nuumber is strong %d ", sum);
	else
		printf("given number is not strong number");
}
long int factorial(int n)
{

	if(n==0){
		return 1;
	}
	else 
		return n*(factorial(n-1));
	
	
}
