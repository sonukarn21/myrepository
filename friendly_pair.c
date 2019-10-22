#include<stdio.h>
int divisor_sum(int num);
int main()
{
	int num1, num2;
	printf("enter the 1st no:");
	scanf("%d",&num1);
	printf("enter the 2nd no:");
	scanf("%d",&num2);
	if(num1==divisor_sum(num1)&&num2==divisor_sum(num2))
		printf(" given no is friendly pair");
	else
		printf("\ngiven no is not frienly pair");
	
}
int divisor_sum(int num){
	int i=1,sum=0;
	while(i<num){
		if(num%i==0)
		sum= sum+i;
		i++;
	}
}
