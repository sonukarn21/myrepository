#include<stdio.h>
int main()
{
	int i, n;
	printf("enter no which u want to put : ");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",i,n,i*n);
	}
}
