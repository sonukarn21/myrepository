#include<stdio.h>
int main()
{
	int row,col,i,j;
	printf("enter the no of row:- ");
	scanf("%d",&row);
	printf("\nenter the no of col:- ");
	scanf("%d",&col);
	for(i=1;i<=row; i++){
		for(j=1; j<=i; j++)
		{
		
		    printf("* ");
		}
		printf("\n");
	}
	
}
