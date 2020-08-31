#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
	int data;
	char name[30];
	char club[30];
	struct node *link;
};
typedef struct node NODE;
NODE *newnode,*start=NULL,*currptr,*prevptr;
NODE *getnode(int value, char name[30],char club[30])
{
	newnode=(NODE *)malloc(sizeof(NODE));
	if(newnode==NULL)
		printf("Memory was not allocated\n");
	else
	{
		newnode->data=value;
		strcpy(newnode->name,name);
		strcpy(newnode->club,club);
		newnode->link =NULL;
		return newnode;
	}
}
void insert_beg()
{
	int value;
	char name[30],club[30];
	printf("enter the name of the player\n");
	scanf("%s",name);
	printf("Enter the goals of the player:\n");
	scanf("%d",&value);
	printf("enter the club\n");
	scanf("%s",club);
	newnode=getnode(value,name,club);
	currptr=start;
	start=newnode;
	start->link=currptr;
	printf("NODE INSERTED\n");
}
void delete_firstnode()
{
	if(start==NULL)
		printf("List Empty, No nodes to delete\n");
	else
	{
		currptr=start;
		start=start->link;
		printf("The deleted element is %d\n",currptr->name);
		free(currptr);
	}
}
void display()
{
	if(start==NULL)
		printf("List Empty, No nodes to display\n");
	else
	{
		printf("The elements in the list are: ");
		for(currptr=start;currptr!=NULL;currptr=currptr->link)
			printf("%d   ", currptr->data);

	}
}
void count(){
    int count=0;
    if(start==NULL)
		printf("List Empty, No nodes to count\n");
	else
	{
		printf("The number of elements in list are: ");
		for(currptr=start;currptr!=NULL;currptr=currptr->link)
			count+=1;
	}
	printf("%d",count);
}
void average(){
    int sum=0;
    if(start==NULL)
		printf("List Empty, No nodes to find average\n");
	else
	{
		printf("The average of goals in list are: ");
		for(currptr=start;currptr!=NULL;currptr=currptr->link)
			sum+=currptr->data;
			count+=1;
	}
	printf("%d",sum/count);
}
int main(){
    int ch;
	while(1)
	{
		printf("\nOperations on singly->linked list\n");
		printf("1:Insert at Begining\n");
		printf("2:Delete first node\n");
		printf("3: display the list \n");
		printf("4: count players \n");
		printf("5: average of goals \n");
		printf("6: quit\n");
		scanf("%d",&ch);
        switch(ch)
		{
			case 1: insert_beg();
			        break;
            case 2: delete_firstnode();
                    break;
            case 3: display();
                    break;
            case 4: count();
                    break;
            case 5: average();
                    break;
            case 6: break;
		}
	}
}
