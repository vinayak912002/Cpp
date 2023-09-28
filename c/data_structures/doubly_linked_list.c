#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* prev;
    struct Node* next;
};
struct Node* head;
//insert at the beginning
void Insert(int x)
{
    struct Node* temp1 = (struct Node*) malloc(sizeof(struct Node*));
    struct Node* temp2 = head;
    temp1->data = x;
    temp1->prev = NULL;
    temp1->next = NULL;
    if(head != NULL)
    {
        temp1->next = temp2;
        temp2->prev = temp1;
        temp2->next = head->next;
    }
    head = temp1;
}

void Print()
{
    struct Node* temp = head;
    printf("In the forward direction: \n");
    while (temp!=NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
int main()
{
    head = NULL;
    printf("How many numbers?\n");
    int n,i,x;
    scanf("%d",&n);
    for(i = 0; i<n; i++){
        printf("Enter the number \n");
        scanf("%d",&x);
        Insert(x);
        Print();
    }
    return 0;
}