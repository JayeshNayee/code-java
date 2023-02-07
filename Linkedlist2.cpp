#include <iostream>
using namespace std;
// create a struct for node
class node
{
public:
    int data;
    node *next;
    node *prev;
    ~node()
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
void printlist(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void getLength(node *head)
{
    int len = 0;
    node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
}

void insetAthead(node *&head, int newdata)
{
    node *temp = new node();
    temp->data = newdata;
    temp->next = head;
    head->prev = temp;
    head = temp;
}
void insertAtlast(node *&tail, int newdata)
{
    node *temp = new node();
    temp->data = newdata;
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
void insertpos(node*&tail,node *&head, int newdata, int pos)
{
    int cnt =1 ;
    node*cur = head;
    while (cnt<pos-1)
    {
    cur = cur->next;
    cnt++;
    }
    if(pos==1){
        insetAthead(head,newdata);
    return;
    }
    if(cur->next == NULL){
    insertAtlast(tail,newdata);
    }
    node*nodeto = new node();
    nodeto->data = newdata;

    nodeto->next = cur->next;
    cur->next->prev = nodeto;
    cur->next = nodeto;
    nodeto->prev = cur;
}

int main(int argc, char const *argv[])
{
    node *head = new node();
    node *tail = head;
    head->data = 10;
    head->next = NULL;
    printlist(head);
    insetAthead(head, 11);
    printlist(head);

    insetAthead(head, 12);
    printlist(head);

    insertAtlast(tail, 13);
    printlist(head);

    insertAtlast(tail, 14);
    printlist(head);

    insertpos(tail,head,63,2);
    printlist(head);
    return 0;
}
