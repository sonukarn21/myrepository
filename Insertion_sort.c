#include<stdio.h>
int Insertion_sort(int arr[], int n);
int main(){
 int n, i;
	printf("How many element u want sort ");
	scanf("%d",&n);
	int arr[n];
	printf("enter the element in array :  ");
	for (i=0; i<n; i++){
		scanf("%d",&arr[i]);

	}
	Insertion_sort (arr, n);
	for (i=0; i<n; i++){
		printf("%d ",arr[i]);

	}

}
int Insertion_sort(int arr[], int n){
	int i, j, temp;
	for(i=1; i<n; i++){
		temp = arr[i];
		j= i-1;
		while(j>=0&&temp<arr[j]){
				arr[j+1]=arr[j];

				j--;

  		}
		arr[j+1]=temp;


	}
		return;
}
