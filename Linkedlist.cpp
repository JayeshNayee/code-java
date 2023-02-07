#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node*next;
};
void printList(Node*head)
{
    while (head != NULL)
    {
    cout<<head->data<<" "; 
    head = head->next;
    }
}
void insertAthead(Node**head, int newdata){
    // create stating new node
    Node*newNode = new Node();
    // push the data in creat node
    newNode->data = newdata;
    // head sign put 
    newNode->next = *head;
    *head = newNode;
}
void insertAtend(Node**head ,int newdata){
    // create new node
    Node*temp = new Node();
    temp->data = newdata;
    temp->next = NULL;
    // if linked list is empty then 
    if(*head==NULL){
       *head= temp;
        return;
    }
    Node*last = *head;
    while (last->next!=NULL)
    {
       last = last->next;
    }
    last->next = temp;
}
void DeleteNode(Node*&Head, int pos){
    int cnt  = 0;
   }
int main(int argc, char const *argv[])
{
    // Create head node
    Node*head = new Node();
    Node*second = new Node();
    Node*third = new Node();
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;
    // printList(head);
    // cout<<endl;
    // insertAthead(&head,00);

    // insertAtend(&head,40);
    // printList(head);

    DeleteNode(&head,2);
    printList(head);
    return 0;
}
