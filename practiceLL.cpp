#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    ~Node()
    {
        this->data = data;
        this->next = NULL;
    }
    // Node()
    // {
    //     int value = this->data;
    //     if (this->next != NULL)
    //     {
    //         delete next;
    //         next = NULL;
    //     }
    // }
};
void printList(Node *head)
{
    Node *temp = head;
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
// // insert at first position
// void insertATfirst(Node *&head, int newdata)
// {
//     // create new node
//     Node *temp = new Node();
//     temp->data = newdata;

//     temp->next = head;
//     head = temp;
// }
// // insert at last position
// void insertAtlast(Node *&head, int newdata)
// {
//     Node *temp = new Node();
//     temp->data = newdata;
//     temp->next = NULL;
//     // Node*last = head;
//     while (head->next != NULL)
//     {
//         head = head->next;
//     }
//     head->next = temp;
//     head = temp;
// }
// // insert At any position
// void insertanypos(Node *&head, int newdata, int pos)
// {
//     Node *newNode = new Node();
//     newNode->data = newdata;
//     // find the position
//     Node *temp = head;
//     int cnt = 1;
//     while (cnt < pos-1)
//     {
//         temp = temp->next;
//         cnt++;
//     }
//     if (pos == 1)
//     {
//         insertATfirst(head, newdata);
//         return;
//     }
//      newNode->next = temp->next;
//      temp->next = newNode;
// }
// void deletemiddele(Node *&head, int position)
// {

//     // delete first element
//     if (position == 1)
//     {
//         Node *curr = head;
//         head = head->next;
//         curr->next = NULL;
//         delete curr;
//     }
//     // delete any position middle element
//     Node *prev = NULL;
//     Node *current = head;
//     int cnt = 1;
//     while (cnt < position)
//     {
//         prev = current;
//         current = current->next;
//         cnt++;
//     }
//     prev->next = current->next;
//     current->next = NULL;
//     delete current;
// }
// // void deletemiddle2(Node*&head , int pos){
// //     Node*prev = NULL;
// //     Node*current = head;
// //     int cnt = 1;
// //     while (cnt<pos)
// //     {
// //         prev  = current;
// //         current = current->next;
// //         cnt++;
// //     }
// //     prev->next = current->next->prev;
// //     current->next->prev = prev;
// //     current->next = NULL;
// //     delete current;
// // }
void deletepos(Node*head , int pos){
    Node*temp = head;
    int cnt = 0;
    while (cnt<pos)
    {
        temp = temp->next;
        cnt++;
    }
    temp->next = temp->next->next;
    
}

int main(int argc, char const *argv[])
{
    Node *head = new Node();
    Node*sec = new Node();
    Node*third = new Node();
    head->data = 10;
    Node *tail = head;
    head->next = sec;
    sec->data = 20;
    sec->next = third;
    third->data = 30;
    third->next = NULL;
    printList(head);

    // insertATfirst(head, 05);
    // // printList(head);

    //  insertAtlast(tail, 20);
    // // printList(head);

    // insertAtlast(tail, 22);
    // // printList(head);

    // deletemiddele(head, 3);
    // // printList(head);

    // insertanypos(head,99,3);

    deletepos(head,2);
    printList(head);

    return 0;
}