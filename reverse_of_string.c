#include<stdio.h>
int count(char *str);
char reverse(char *str);
int main(){
	char str[50];
	int count=0,i=0;
	printf("enter the string:- ");
	gets(str);
	
	printf("%s",reverse(str));
}
int count(char *str){
	int i=0, count=0;
	while(*str!='\0'){
		count++;
		i++;
	}
	return count;
}
char reverse(char str){
	int a, i=0;
	a=count(str)-1;
	while(a>=0){
	printf("%c",str[a]);
		a--;
	}
	
}
