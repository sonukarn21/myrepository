#include<stdio.h>
#include<string.h>
int vowel(char str);
int main()
{
	char str1[50],str2[50];
	int c=0,d=0;
	gets(str1);
	for(c=0; str1[c]!='\0';c++){
		if(vowel(str1[c])==0){
			str2[d]=str1[c];
			d++;
		}
	}
	str2[d]='\0';
	strcpy(str1, str2);
	printf("%s\n", str1);
    return 0;
	
}
int vowel(char str1){
    if(str1=='A'||str1=='E'||str1=='I'||str1=='O'||str1=='U'||str1=='a'||str1=='e'||str1=='i'||str1=='o'||str1=='u' )  {
 	    return 1;
 }
	else
		return 0;
	
}
