#include<stdio.h>
long int binary(int n);
int main(){
    int n;
	printf("enter the no:- ");
	scanf("%d",&n);
	printf("%ld ",binary(n));
	printf("\n%d ",count(n));
}
int count(int n){
	int count=0, rem;
	while(n>0){
		rem=n%10;
		count++;
		n=n/10;
	}
	return count;
}
long int binary(int n){
	
	int rem,i=0; 
	long int   a[count(n)-1];
	char b[i];
	while(n!=0){
		
		rem=n%2;
		if(rem==1||rem==0){
			a[i]=rem;
						
		}
		b[i]=a[i];
		printf("\n%d",b[i]);
		i++;
		
		/*else{
			rem=rem%10;
		}*/
		n=n/2;
	
	}
		
	
	
}
