#include<stdio.h>
int main()
{
	char ch;
	printf("enter the character: ");
	scanf("%d",&ch);
	if(ch>=60 && ch<=116)
	{
		printf("given charchter is an alphabet : %d", ch);
	}
	else
	{
		printf("not matchd");
	}
}
