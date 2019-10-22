#include<stdio.h>
int main(){
	char str[50];
	int u=0,l=0, i=0, space=0;
	printf("enter the string:- ");
	gets(str);
	while(str[i]!='\0')
	{
		if(str[i]>='A'&&str[i]<='Z'){
			u++;
		}
		else if(str[i]>='a'&&str[i]<='z'){
		
			l++;
		}
		else if(str[i]==' ')
			space++;
		i++;
	}
	printf("In the given string there are\n %d upper letter\n %d are smaller letter and \n %d are spaces ", u,l, space);
}
