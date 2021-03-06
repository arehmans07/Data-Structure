#include <stdio.h>
#include <stdlib.h>
 
 
/* Structure of a node */
struct node {
    int data; //Data part
    struct node *next; //Address part
}*head;
 
 
 
void createList(int n);
void insertNodeAtEnd(int data);
void displayList();
 
 
 
int main()
{
    int n, data;
 
    /*
     * Creates a singly linked list of n nodes
     */
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    createList(n);
 
    printf("\nData in the list \n");
    displayList();
 
    /*
     * Inserts data at the end of the singly linked list
     */
    printf("\nEnter data to insert at end of the list: ");
    scanf("%d", &data);
    insertNodeAtEnd(data);
 
    printf("\nData in the list \n");
    displayList();
 
    return 0;
}
 
 
 
void createList(int n)
{
    struct node *newNode, *temp;
    int data, i;
 
    head = (struct node *)malloc(sizeof(struct node));
        
        printf("Enter the data of node 1: ");
        scanf("%d", &data);
 
        head->data = data; //Links the data field with data
        head->next = NULL; //Links the address field to NULL
 
        temp = head;
 
        /*Creates n nodes and adds to linked list         */
        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));
 
            /* If memory is not allocated for newNode */
           
            
                printf("Enter the data of node %d: ", i);
                scanf("%d", &data);
 
                newNode->data = data; //Links the data field of newNode with data
                newNode->next = NULL; //Links the address field of newNode with NULL
 
                temp->next = newNode; //Links previous node i.e. temp to the newNode
                temp = temp->next; 
            
        }
 
        printf("SINGLY LINKED LIST CREATED SUCCESSFULLY\n");
    
}
  
 /*Creates a new node and inserts at the end of the linked list. */
 
void insertNodeAtEnd(int data)
{
    struct node *newNode, *temp;
 
    newNode = (struct node*)malloc(sizeof(struct node));
 
   
    
        newNode->data = data; //Links the data part
        newNode->next = NULL; 
 
        temp = head;
 
        //Traverse to the last node
        while(temp->next != NULL)
            temp = temp->next;
 
        temp->next = newNode; //Links the address part
 
        printf("DATA INSERTED SUCCESSFULLY\n");
    
}
 
 
 
void displayList()
{
    struct node *temp;
 
    /*If the list is empty i.e. head = NULL     */
    
        temp = head;
        while(temp != NULL)
        {
            printf("Data = %d\n", temp->data); //Prints the data of current node
            temp = temp->next; //Advances the position of current node
        }
    
} 

