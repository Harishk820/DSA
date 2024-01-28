#include <iostream>
using namespace std;

class node
{
public:
  int data;
  node *next;

  node()
  {
    cout << "cons called" << endl;
    this->next = NULL;
  }

  node(int data)
  {

    this->data = data;
    this->next = NULL;
    cout << "cons called " << this->data << endl;
  }
};

void printLLlength(node *&head)
{
  node *temp = head;
  int len = 0;
  while (temp != NULL)
  {
    len++;
    temp = temp->next;
  }
  cout << "length:" << len << endl;
}

void printLL(node *&head)
{

  node *temp = head;
  while (temp != NULL)
  {

    cout << temp->data << "->";
    temp = temp->next;
  }

  cout << endl;
}

int main()
{
  // creaation of node

  // ----------static noode  creation
  // node n;
  //----------- dynamic node creation
  node *first = new node(10);
  node *second = new node(20);
  node *third = new node(30);

  // link list creation
  first->next = second;
  second->next = third;

  node *head = first;
  printLL(head);
  printLLlength(head);
  return 0;
}