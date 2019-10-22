#include<stdio.h>
int main(){
int n,n1,i,j,count;
scanf("%d", &n);
for(i=n; i>1;i--){
	count = 0;
	for(j=1; j<=i; j++){

		if(i%j==0){
			count++;

		}
	}
	if(i!=n) {
		 n1=n+i;
		if(count==2){
			printf("%d",i);
			break;

		}
	}
	
}
for(i=n; i<n1;i++){
	count = 0;
	for(j=1; j<=i; j++){

		if(i%j==0){
			count++;

		}
	}
		if(i!=n){

	 	if(count==2){
			printf(" %d ",i);
			break;

		}
	}

}

}
