#include<stdio.h>
#include<stdlib.h>


struct Node
{
    int data;
    struct Node* next;
};
struct Node* head;//global variable
//function to add/insert node at the beginning
void Insert(int x)
{
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));//malloc dynamically allocates memory in the heap memory
    temp->data = x;//-> means variable inside a struct
    temp->next = NULL;
    if(head != NULL)
    {
        temp->next = head;
    }
    head = temp;
}
//function to insert node at nth position
void InsertAtN(int data, int n)
{
    struct Node* temp1 = (struct Node*) malloc(sizeof(struct Node*));//we have to do typecasting because malloc returns a void pointer
    temp1->data = data;
    temp1->next = NULL;
    if (n == 1)
    {
        temp1->next = head;
        head = temp1;
        return;
    }
    struct Node* temp2 = head;
    for (int i = 0; i<n-2; i++)//we will go to the n-1th node
    {
        temp2 = temp2->next;
    }
    //when we are on the n-1th node we need to make the next pointer to point to the nth node.
    //and the next pointer of the nth node must point to n+1th node
    temp1->next = temp2->next;
    temp2->next = temp1;
}
//function to delete a node
void DeleteNode(int n)
{
    struct Node* temp1 = head;
    if(n==1)
    {
        head = temp1->next;
        free(temp1);
        return;
    }
    for(int i = 0; i < n - 2; i++)
    {
        temp1 = temp1->next;
    }
    //temp1 will point to the n-1th node
    struct Node* temp2 = temp1->next;//nth node
    temp1->next = temp2->next;
    free(temp2);
}
int searchElement(int target)
{
    struct Node* temp = head;
    int count = 0;
    while(temp!=NULL)
    {
        if(temp->data == target)
        {
            return count;
        }
        temp = temp->next;
        count++;
    }
    return -1;
}
void Print()
{
    struct Node* temp = head;
    printf("List is : ");
    while (temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
    
}
int main()
{
    head = NULL;//empty list
    printf("How many numbers?\n");
    int n,i,x;
    scanf("%d",&n);
    for(i = 0; i<n; i++){
        printf("Enter the number \n");
        scanf("%d",&x);
        Insert(x);
        Print();
    }
    InsertAtN(2,4);
    Print();
    return 0;
}