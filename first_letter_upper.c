#include<stdio.h>
#include<string.h>
int main(){
	char str[50];
	int i;
	gets(str);
	printf("%c", toupper(str[i]));
	for(i=1; i<strlen(str);i++){
		if(str[i]==' '){
			printf("%c", toupper(str[i+1]));
			i++;
		}
		else{
			  printf("%c", (str[i]));
		}
	}



}
