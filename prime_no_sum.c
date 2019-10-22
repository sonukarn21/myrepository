#include<stdio.h>
int isprime(int n);
int main(){
	int n,a,i;
	printf("enter the no:- ");
	scanf("%d",&n);
	for(i=2; i<=n/2; i++)
	{
		if(isprime(i)==1&&isprime(n-i)==1)
		{
		
				printf("\n%d= %d+%d",n, i, (n-i));
			
		}
	}
}
int isprime(int n)
{
	int count=0, flag=0, i;
	for(i=1; i<=n; i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==2)
		return flag=1;
	else
		return flag;
}
