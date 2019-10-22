#include<stdio.h>
#include<math.h>
int decimal(long int n );
int count(long int n);
int main()
{
	int n;
	printf("enter the no:- ");
	scanf("%d",&n);
	
	printf("%d",decimal(n));
	
	
	 
}
int count(long int n){
	int t=0, rem;
	while(n>0){
		t=t+1;
		n=n/10;
	
	}
	return t;
}
int decimal(long int n)
{
	int rem, a, sum=0, result;
	a=count(n)-1;
	while(n>0){
		rem=n%10;
		if(rem==1||rem==0){
			result= rem*pow(2,a);
			sum=sum+result;
		}
		n=n/10;
		a--;
		
	}
	return sum;
}
