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
void InsertatIdx(int data, int index){
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node*));
    struct Node* itr = head;
    temp->data = data;
    for(int i = 0; i < index - 1; i++){
        itr = itr->next;
    }
    if(itr == NULL) 
    {
        printf("invalid index");
        free(temp);
        return;
    }

    temp->next = itr->next;
    temp->prev = itr;
    if(itr->next != NULL){
        itr->next->prev = temp;
    }
    itr->next = temp;
}

void Print()
{
    struct Node* temp = head;
    printf("The list is: ");
    while (temp!=NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
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