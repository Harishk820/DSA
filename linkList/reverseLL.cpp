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

int findLength(node *&head)
{
  int length = 0;
  node *temp = head;
  while (temp != NULL)
  {
    length++;
    temp = temp->next;
  }
  return length;
}

void deleteNode(node *&head, node *&tail, int position)
{

  if (head == NULL)
  {
    cout << "Empty LL" << endl;
    return;
  }

  int len = findLength(head);
  if (position == 1)
  {
    // first node ko delete kr do

    node *temp = head;
    head = head->next;
    temp->next = NULL;

    delete temp;
  }
  else if (position == len)
  {
    // last node ko delete kr do

    // find prev
    node *prev = head;
    while (prev->next != tail)
    {
      prev = prev->next;
    }

    // prev ko null pe point karao
    prev->next = NULL;

    // tail ko delete karo
    delete tail;

    // tail ko updata karo
    tail = prev;
  }
  else
  {
    // mid m delete karo

    // step1: set prev/ curr
    node *prev = NULL;
    node *curr = head;

    while (position != 1)
    {
      position--;
      prev = curr;
      curr = curr->next;
    }

    // step2: prev k next m curr ka next add karo

    prev->next = curr->next;

    // step3:node ko isolate kr so
    curr->next = NULL;

    // step 4: delete kro node ko
    delete curr;
  }
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

// reverse Linkk list'

void reverseLinklist(node *&head)
{

  node *prev = NULL;
  node *curr = head;

  while (curr != NULL)
  {
    node *nextNode = curr->next;
    curr->next = prev;
    prev = curr;
    curr = nextNode;
  }
  head = prev;
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

  cout << "length is:" << findLength(head) << endl;

  deleteNode(head, tail, 1);
  printLL(head);
  cout << "length is:" << findLength(head) << endl;

  deleteNode(head, tail, 3);
  printLL(head);
  cout << "length is:" << findLength(head) << endl;
  cout << "Reversed Linklist:" << endl;
  reverseLinklist(head);
  printLL(head);

  return 0;
}