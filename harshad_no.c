#include<stdio.h>
int harshad_no(int n);
int main()
{
	int n;
	printf("enter the no:-");
	scanf("%d",&n);
	if(n%harshad_no(n)==0)
		printf("given no is harshad number");
	else
		printf("given no id is not harshad no ");
}
int harshad_no(int n)
{
	int sum=0;
	while(n>0){
	sum=sum+(n%10);
	n=n/10;
}
return sum;
}
