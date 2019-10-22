#include<stdio.h>
int main(){
	char str[50];
	char *ptr;
	int i=0,v=0,c=0;
	
	printf("enter the string:- ");
	gets(str);
	ptr=str;
	while(*ptr!='\0'){
		if(*ptr=='A'||*ptr=='E'||*ptr=='I'||*ptr=='O'||*ptr=='U'||*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u' ){
			v++;
		}
		else
		{
			c++;
		}
		ptr++;
	}
	printf("total no vowel %d and %d consonant",v,c);
}
