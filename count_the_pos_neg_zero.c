#include<stdio.h>
int main(){
	int n, pos, neg, zero;
	pos=neg=zero=0;
	char ans='y';
	while(ans=='y'||ans=='Y'){
		printf("enter no");
		scanf("%d",&n);
		if(n>0){
			pos++;
			
		}
		 if(n<0){
			neg++;
			
		}
		 if(n==0){
		 
		
		zero++;
		}
		fflush(stdin);
	
		printf("enter y for continue: ");
		scanf("%c",&ans);
		
	}
	printf("positive= %d, \n negative=%d\n zero=%d ", pos, neg, zero);
	return 0;
}
