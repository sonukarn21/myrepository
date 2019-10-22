#include<stdio.h>
int main(){

int n, i,intial=0, first=1, sum=0;
scanf("%d", &n);
for(i=0; i<=n; i++){
	intial= first;
	first=sum;
	sum = intial+first;
	if(sum == n){
		printf("yes ");
		break;
	}

}


}
