#include<stdio.h>
int main(){
	int n1, n2,i,j,k,arr3[100];
	scanf("%d,%d",&n1,&n2);
	int arr1[n1],arr2[n2];
	printf("enter the element into thefirst  arrray: \n");
	for(i=0;i<n1; i++){
		scanf("%d",&arr1[i]);
	}
	printf("enter the element into the second arrray: \n");
	for(i=0;i<n1; i++){
		scanf("%d",&arr2[i]);
	}
	k=0;
	for(i=0;i<n1;i++){
		arr3[k]=arr1[i];
		for(j=0;j<n2; j++){
			if(arr1[i]==arr2[j]){
			    	k++;
					arr3[k]=arr2[j];

			}

		}
		 printf("%d ",arr3[k]);

	}
}
