#include<stdio.h>
int main()
{
	char str[50],str2[50];
	int i=0,k=0;
	printf("enter the string:-");
	gets(str);
	while(str[i]!='\0'){
		str2[i]=str[i];
		i--;
	}
	printf("%s",str2);
}
