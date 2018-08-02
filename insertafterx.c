#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*s;
void createList(int n);
void insertnode(int data,int x);
void displayList();
int main()
{
	int data,n,x;
	 printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    createList(n);
    printf("\nData in the list \n");
    displayList();
    printf("\nEnter data to insert after x in the list: ");
    scanf("%d", &data);
    printf("\nEnter value of x forr which you have add in the list: ");
	scanf("%d", &x);    
    insertnode(data,x);
    printf("\nData in the list \n");
    displayList();

    return 0;
}
void createList(int n)
{
    struct node *newNode, *temp;
    int data, i;

    s = (struct node *)malloc(sizeof(struct node));

    if(s == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        printf("Enter the data of node 1: ");
        scanf("%d", &data);

        s->data = data; 
        s->next = NULL; 

        temp = s;

        
        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));
            if(newNode == NULL)
            {
                printf("Unable to allocate memory.");
                break;
            }
            else
            {
                printf("Enter the data of node %d: ", i);
                scanf("%d", &data);

                newNode->data = data; 
                newNode->next = NULL;
                temp->next = newNode; 
                temp = temp->next; 
            }
        }

        printf("SINGLY LINKED LIST CREATED SUCCESSFULLY\n");
    }
}

void insertnode(int data,int x)
{
	struct node *p,*q=s;
	p=(struct node*) malloc(sizeof(struct node));
		p->data=data;
	while(q->data!=x)
	
	{
	q=q->next;

		if(q->data==x)
		{
		
			p->next=q->next;
			q->next=p;
		}
	}
	
		
		
	}

void displayList()
{
    struct node *temp;
    if(s == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = s;
        while(temp != NULL)
        {
            printf("Data = %d\n", temp->data);
            temp = temp->next;                 
        }
    }
}

