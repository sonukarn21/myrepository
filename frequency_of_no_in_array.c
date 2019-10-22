#include<stdio.h>
int main() {
	int n,count=0,i,j;
	printf("How much element u want to put into the array: ");
	scanf("%d",&n);
	int arr[n];
	printf("enter the element into the array: \n");
	for(i=0;i<n;i++)
	{
		  scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
	printf("%d ",arr[i]);
	}
	i=0;
	while(i<n){
		for(j=0;j<n;j++){
			if(arr[i]==arr[j]){
				count++;
			}
		}

		printf("\nfrequency of %d :  %d: ",arr[i],count);
		i++;
		count=0;
	}

	
}
