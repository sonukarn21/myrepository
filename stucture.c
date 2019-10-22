#include<stdio.h>
int main()
{
	struct student{
		int age;
		char name;
		
	};
	struct student std;
	printf("ensert student age, name \n: ")
	scanf("%d, %c",&std.age, &std.name);
	printf("age=%d\n name=%c " std.age, std.name);
}
