#include<stdio.h>
int main()
{
	int a, b,lcm;
	scanf("%d%d",&a,&b);
	lcm= (a>b)?a:b;
	printf("%d",lcm);
	while(lcm%a!=0 && lcm%b!=0)
	{
		
			print("%d and %d lcm is %d", a,b,lcm);
			break;
		
		++lcm;
	}
	
}
