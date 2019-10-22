#include<stdio.h>
int main(){
	char a[40];
	int i=0,c=0;
	printf("enter the string:- ");
	gets(a);
	while(a[i]!='\0'){
		c++;
		i++;
	}
		printf("%d",c);
	return c;

}
