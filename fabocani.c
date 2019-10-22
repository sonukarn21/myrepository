#include<stdio.h>
int main()
{
	int sum=0, i, n;
	scanf("%d",&n);
	for(i=0; i<=n; i++){
		sum= sum*10+n;
		printf("%d+\r", sum);
			}
}
