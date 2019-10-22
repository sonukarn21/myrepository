 #include<stdio.h>
 int main(){
 	int a,b,c;
 	printf("enter the two no :->");
 	scanf("%d%d", &a,&b);
 	while(1){
 		if(a%b==0){
 			printf("gcd is %d", b);
 			break;
		 }
		 else {

		 c=a;
		 a=b;
		 b=c-b;   }
	 }
 }
