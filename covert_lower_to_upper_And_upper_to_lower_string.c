#include<stdio.h>
int main()
{
	char str[50];
	int i=0;
	printf("enter the string:-");
	gets(str);
	while(str[i]!='\0'){
		if(str[i]>='A'&&str[i]<='Z'){
			str[i]=str[i]+32;
		}
		else
			str[i]=str[i]-32;
		
		i++;
		
	}
	printf("%s",str);
}
