#include<stdio.h>
int main()
{
	int num1, num2, count=0, a;
	printf("enter the intial no:- ");
	scanf("%d",&num1);
	printf("\nenter the last no:- ");
	scanf("%d",&num2);
	while(num1<=num2)
	{
		count=0;
		for(a=1;a<=num1; a++)
		{
			if(num1%a==0)
			{
				count++;
			}
			
		}
		if(count==2)
			{
				printf("%d ",num1);
			}
		num1=num1+1;
	}
	
}
