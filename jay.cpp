#include <iostream>
using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };
struct Node
{
    int data;
    Node *next;
};

void insertNode(Node *&head, int data)
{
    // create a new node and put the data//
    Node *temp = new node(data);
    temp->next = head;
    head = temp;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertposition(Node*&head,int position,int data){
    int cnt = 1;
    Node*temp = head;
    if (position ==1)
    {
      insertNode(head,data);
      return;
    }
    
    while(cnt<position-1) 
    {
      temp = temp->next ;
      cnt++;
    }
    //  make a node for `data `
    Node* nodetoinsrt = new Node (data);
    nodetoinsrt->next = temp->next;
    temp->next = nodetoinsrt;

}
void deletenode(Node*&head,int pos, int data){
   int cnt = 1;
    Node*temp = new  Node(data);
     Node*curr = head; 
     while (cnt<pos)
     {
        temp = curr;
        curr = curr->next;
      cnt++;    
       }
      temp->next = curr->next;
    curr->next = NULL;
      delete curr;
}
int main(int argc, char const *argv[])
{
    Node *node1 = new Node(11);
    Node *head = node1;
    print(head);
    // cout<<node1->data<<" "<<endl;
    // cout<<node1->next<<" "<<endl;
    insertNode(head, 22);
    print(head);

    insertNode(head, 33);
    print(head);

    insertNode(head, 44);
    print(head);
    
    insertNode(head,55);
     print(head);

      insertposition(head,1,88);
     print(head);

     deletenode(head,2,44);
     print(head);


    return 0;

}
