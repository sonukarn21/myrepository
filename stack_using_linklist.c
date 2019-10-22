#include <stdio.h>

#include<stdlib.h>
void push();
void pop();
void traverse();
struct node{
		int data;
		struct node* link;
	};
	struct node*top = NULL;
int main()
{
	int c;
	
	start:

	
	printf("For enter the data into stack press 1 : \n" );
	printf("For delete the element from the stack press  2 :\n" );
	printf("For display the element from the stack press 3 : \n" );
	scanf("%d",&c);
	switch(c){
		int i,n;
		case 1:
			
				printf("how many no u want to insert into stack: ");
				scanf("%d", &n);
				
				for(i=0;i<n; i++){
				
				push();
			}
		
			goto start;
			break;
		case 2:
				pop();
				
			
		
			goto start;
			break;
		case 3:
			printf("elements are: \n");
				 traverse();
				 
				goto start;
			break;
		default:
			printf("invalid no");
	}
	
	
}
void push(){
	struct node* temp;
	temp = (struct node *)malloc(sizeof(struct node));
	printf("enter a element:");
	scanf("%d", &temp->data);
	temp->link = top;
	top=temp;
	
}
void pop(){
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	if(top==NULL)
	{
	    printf("there is no element present in stack \n");
	}
	else{
	    temp=top;
	    printf("delete element \n",temp->data);
	    top=top->link;
	    temp->link=NULL;
	    free(temp);
	    
	}
	
}
void  traverse()
{
    struct node* temp;
    if(top==NULL){
        printf("there is no element present in the stack\n");
        
    }
    else{
        temp=top;
        while(temp!=NULL){
            printf("%d \n", temp->data);
            temp=temp->link;
        }
    }
    
	
}

