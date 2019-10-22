#include<stdio.h>
#include<math.h>
int count(int n);
int power(int n);
int main(){
	int num1, num2,a, temp1;
	printf("enter the intial no:- ");
	scanf("%d",&num1);
	
	printf("\nenter the last no:- ");
	scanf("%d",&num2);
	while(num1<=num2)
	{
		temp1=num1;
		if(temp1==power(temp1))
			printf("%d ",num1);
		num1++;
	}
}
int count(int n){
	int t=0, rem;
	while(n>0){
		t=t+1;
		n=n/10;
	
	}
	return t;
}
int power(int n)
{
	int result,sum=0,rem,a;
	a= count(n);
	while(n>0){
	
		rem=n%10;
		result=pow(rem,a);
		sum=sum+result;
		n=n/10;
	}
	
	return sum;
	//printf("%d",sum);
}
