#include<stdio.h>
int main (){
	int a;
	a= sumdig(123);
}
int sumdig(int n){
	int s,d;
	if(n!=0){
		d=n%10;
		n=n/10;
		s=d+sumdig(n);
	}
	else
	return(0);
	return(s);
}
