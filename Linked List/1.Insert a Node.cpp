#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
};


void insertAtFront(Node** head, int new_data)
{
    Node* temp = new Node();
    
    temp->data = new_data;
    temp->next = *head;
    
    *head = temp;
}

void insertAtMiddle(Node* prevNode, int new_data)
{
    if(prevNode == NULL)
    {
        cout<<"Given Node cannot be NULL";
        return ;
    }
    
    Node* temp = new Node();
    
    temp->data = new_data;
    temp->next = prevNode->next;
    
    prevNode->next = temp;
    return;
}

void insertAtLast(Node** head, int new_data)
{
    Node* temp = *head;
    Node* temp1 = new Node();
    
    temp1->data = new_data;
    temp1->next = NULL;
    
    if(*head==NULL)
    {
        *head =  temp1;
        return;
    }
    
    while(temp->next !=NULL)
    {
        temp = temp->next;
    }
    
    temp->next = temp1;
    return;
}

void printList(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}


int main()
{
  Node* head =NULL;
  
  insertAtLast(&head, 6);
  insertAtFront(&head, 7);
  insertAtFront(&head, 1);
  insertAtMiddle(head->next,8);
  insertAtLast(&head, 4);
  
  cout<<"Created Linked List"<<endl;;
  printList(head);
  
  return 0;
}
