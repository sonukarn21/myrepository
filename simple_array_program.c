#include<stdio.h>
int main(){
	int n,i;
	printf("enter the no element");
	scanf("%d",&n);
	int arr[n];
	printf("enter the element into the array\n");
	for(i-0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n; i++){
		printf("%d ",arr[i]);
	}
}
