#include<stdio.h>
int selection_sort(int arr[], int n);
int main(){
 int n, i;
	printf("How many element u want sort ");
	scanf("%d",&n);
	int arr[n];
	printf("enter the element in array :  ");
	for (i=0; i<n; i++){
		scanf("%d",&arr[i]);

	}
	selection_sort (arr, n);
	for (i=0; i<n; i++){
		printf("%d ",arr[i]);

	}

}
int selection_sort(int arr[], int n){
	int i , j, temp, min_index;
	for(i=0; i<n; i++){
		min_index = i;
		for(j=i+1; j<n; j++){
			if(arr[min_index]>arr[j]){
				min_index= j;
			}

		}
			temp = arr[min_index];
			arr[min_index] = arr[i];
			arr[i]=temp;

	}
}
