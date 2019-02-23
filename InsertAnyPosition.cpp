#include <iostream>
#include <cstdlib>
using namespace std;
struct Node{                    //Create a node here
  int data;
  Node *next;
};
Node *head = NULL;              // Global pointer variable intially NULL
void InsertAnyWhere(int data, int pos)    //Create a function to insert a node any where in link list
{
  Node *NewNode = new Node;
  NewNode->data = data;
  NewNode->next = NULL;
if(pos == 1)                       //If node position is first
    {
    NewNode->next = head;
    head = NewNode;
    return;
    }
    Node *temp = head;
    for(int i=1;i<pos-1;i++)          //Find position-1 node
    {
     temp = temp->next;
    }
    NewNode->next = temp->next;
    temp->next = NewNode;
}
void print()                       //This function use for print the data of List
{
  if(head == NULL)
  {
    cout<<"List is empty!\n";
    return;
  }
  Node *temp = head;
  while(temp != NULL)
  {
    cout<<temp->data<<" ";
    temp = temp->next;
  }
  cout<<endl;
}
int main()
{
  int data,pos,n;
  print();
  cout<<"List is : ";
  InsertAnyWhere(2,1);
  InsertAnyWhere(3,1);
  InsertAnyWhere(4,1);
  print();
  cout<<"Enter the node number: ";
  cin>>n;
  for(int i=0;i<n;i++)
  {
      cout<<"Which position \n";
    cin>>pos;
    cout<<"Enter the data : "<<endl;
    cin>>data;
    InsertAnyWhere(data, pos);
    print();
  }
  return 0;
}
