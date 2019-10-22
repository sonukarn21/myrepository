#include<stdio.h>
int hcf(int n1, int n2);
int lcm(int n1, int n2);
int main(){
	int n1,n2;
	scanf("%d", &n1);
	scanf("%d", &n2) ;
	 printf(" %d \n", hcf(n1,n2));
	  printf("%d",lcm(n1,n2));
}
int hcf(int n1, int n2) {

	 if(n1==0)
		return n2;
	else if(n2==0)
		return n2;

	return hcf(n2%n1, n1);

	
}
int lcm(int n1, int n2){
	return n1*n2/hcf(n1,n2);
}
