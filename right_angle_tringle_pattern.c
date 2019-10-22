#include<stdio.h>
int main()
{
	int row,col,i,j;
	printf("enter the no of row:- ");
	scanf("%d",&row);
	for(i=1; i<=row; i++)
	{
		for(j=1;j<=row;j++)
		{
			if(j>=(row+1)-i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
