#include<stdio.h>
int gcd(int a, int b);
int lcm( int a, int b);
int main(){
	int a,b;
	printf("Enter the two no:- ");
	scanf("%d %d", &a,&b);
	printf("%d and %d lcm is %d", a,b,lcm(a,b));
	return 0;
}
int gcd(int a, int b){
	if(a==0||b==0)
	return 0;
	if(a==b)
	return a;
	if(a>b)
	return gcd(a-b, b);
	return gcd(b-a, a);
}
int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}
