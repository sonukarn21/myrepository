#include<stdio.h>
int sort(int arr[], int n);
int main(){
	int n,i,j,*p;
	printf("how much element u want to put in the array: ");
	scanf("%d",&n);
	int arr[n];
	p = arr;
	printf("enter the element into array: \n ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\nafter sorting the array\n");
	printf(sort(*p,n));

		printf("\nminimum values in the array is : %d\n",arr[0]);
		printf("maximum values in the array is : %d",arr[n-1]);


}
int sort(int arr[], int n){
	int i, j, temp;
		for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				   temp=arr[i];
				   arr[i]=arr[j];
				   arr[j]=temp;
				   sort(arr, n);
			}
		}
		//printf("%d ",arr[i]);

	}
}
