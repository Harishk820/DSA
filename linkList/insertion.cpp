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
  }
};

// inserting at the start
void insertAtStart(node *&head, node *&tail, int data)
{
  if (head == NULL)
  {
    // emplt link llist

    // new node created
    node *newNode = new node(data);
    // 2 head is now at new node
    head = newNode;
  }

  // list is non empty
  else
  {
    // craete a new node
    node *newNode = new node(data);

    // point new node to head
    newNode->next = head;

    // update the head node
    head = newNode;
  }
}

void insertAtTail(node *&head, node *&tail, int data)
{

  if (head == NULL)
  {
    // new node banao
    node *newNode = new node(data);
    // head , tail ko new node pe point karao

    head = newNode;
    tail = newNode;
  }
  // LL empty nhi h
  else
  {
    // create a new node
    node *newNode = new node(data);

    // tail k next ko new node pe point kro
    tail->next = newNode;

    // tail ko new node pw shift kro
    tail = newNode;
  }
}

//----inserting at a given position

void insertAtPosition(node *&head, node *&tail, int data, int position)
{
  node *prev = NULL;
  node *curr = head;

  // creating node jisko insert karna h
  node *newNode = new node(data);

  while (position != 1)
  {

    prev = curr;
    curr = curr->next;
    position--;
  }
  // pointer adjust karo
  prev->next = newNode;
  newNode->next = curr;
}

void printLL(node *head)
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
  node *first = new node(10);
  node *second = new node(20);
  node *third = new node(30);
  node *forth = new node(30);
  node *tail = forth;

  first->next = second;
  second->next = third;
  third->next = forth;

  node *head = first;
  printLL(head);

  // inserting at begning
  insertAtStart(head, tail, 500);
  printLL(head);

  insertAtTail(head, tail, 445);
  printLL(head);

  insertAtPosition(head, tail, 800, 2);
  printLL(head);
  return 0;
}