#include<iostream>
using namespace std;
// linked list creat node
struct node
{
    int data;
    node *next;
};

void printlist(node*n){
    while (n!=NULL)
    {
      cout<<n->data<<endl;
      n = n->next;
    }
}
 node*push(node*head , int Ndata){
     node*newNode = new node();
     newNode->data = Ndata;
     newNode->next = head;
     head = newNode;
     return head;
 }
int main(int argc, char const *argv[])
{
    // node*head = new node();
    // node*second = new node();

    // head->data = 848;
    // head->next = second;
    // second->next = NULL;
    // second->data =54;
    node*head = NULL;

    head = push(head, 55);
    head =push(head,85);
   
   printlist(head);
    return 0;
}


