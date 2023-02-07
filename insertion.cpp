#include<iostream>
using namespace std;
struct node
{
  int data;
  node*next;
};
void print(node*temp){
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
  }
}
 void insertAthead(node**head ,int newdata){
   node*start = new node();
   start->data =newdata;
   start->next = *head;
   *head = start;
 }
void insertAtend(node**head,int newdata){
  node*temp = new node();
  temp->data = newdata;
  temp->next = NULL;
  // if linked list empty
  if(*head == NULL){
   *head = temp;
    return;
  }
  node*last = *head;
  while (last->next!=NULL)
  {
    last = last->next;
  }
  last->next = temp;
}
void insertAtmiddle(node**head , int Nodedata, int pos){
  int cnt = 1;
  
  node*first = *head;
  if(pos==1){
      insertAthead(head, Nodedata);
      return;
  }
  while (cnt<pos-1)
  {
  first = first->next;
  cnt++;
  }
  node*newNode = new node();
  newNode->data = Nodedata;
  // node*prev = *head;
  newNode->next = first->next;
  first->next = newNode;

}
int main(int argc, char const *argv[])
{
  node*head = new node();
  node*head1 = new node();
  head->data = 12;
  head->next = head1;
  head1->data = 14;
  head1->next = NULL;
  // insertAthead(&head,11);
  // insertAthead(&head,12);
   

  // insertAtend(&head,11);
   insertAtmiddle(&head,13,1);
  //  insertAtmiddle(&head,15,1);
  print(head);
  return 0;
}
// 12 13 15 14


