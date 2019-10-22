#include<stdio.h>
int sort(int arr[], int n);
int main(){
	int n, i;
	printf("How many element u want sort ");
	scanf("%d",&n);
	int arr[n];
	printf("enter the element in array :  ");
	for (i=0; i<n; i++){
		scanf("%d",&arr[i]);

	}
	sort (arr, n);
	for (i=0; i<n; i++){
		printf("%d ",arr[i]);

	}
}
int sort(int arr[], int n){
	int i,j,temp;
	for (i=1; i<=n-1; i++){

		for(j=0; j<=n-i; j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j]= arr[j+1];
				arr[j+1]=temp;
			}
		}

	}
 return;
}
