#include<stdio.h>
float f;
float c;
char line_text[50];
int main(){
	printf("input a temprature in centegrate: ");
	fgets(line_text, sizeof(line_text), stdin);
	sscanf(line_text, "%f", &c);
	f=((9.0/5.0)*c)+32;
	printf("%f degree farenhite. \n", f);
	return (0);
}
