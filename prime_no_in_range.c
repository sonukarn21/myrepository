#include<stdio.h>
int main(){
	int num1, num2,i, a,count=0;
	printf("enter the intial number: ");
	scanf("%d",&num1);
	printf("enter the last  number: ");
	scanf("%d",&num2);
	for(i=num1; i<=num2; i++)
	{
		while(i%a==0){
			count++;
		}
		a++;
		if(count==2)
			printf("%d",i);
	}
	
}
