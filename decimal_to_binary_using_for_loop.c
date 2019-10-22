#include<stdio.h>
long int binary(int n);
int main(){
    int n;
	printf("enter the no:- ");
	scanf("%d",&n);
	printf("%ld ",binary(n));
	
}
long int binary(int n){
	long int binary=0;
	int rem, i, flag=1;
	for(i=1;n!=0; i=i*10){
	
		rem=n%2;
		n=n/2;
		binary= binary+rem*i;
	}
	return binary;
}

