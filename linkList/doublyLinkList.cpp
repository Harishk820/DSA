#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *prev = NULL;
  Node *next = NULL;

  Node()
  {
    this->prev = NULL;
    this->next = NULL;
  }

  Node(int data)
  {
    this->prev = NULL;
    this->next = NULL;
    this->data = data;
  }
};

void printDLL(Node *&head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << endl;
}

int findLength(Node *&head)
{

  Node *temp = head;
  int len = 0;
  while (temp != NULL)
  {
    len++;
    temp = temp->next;
  }
  return len;
}

void insertAtHead(Node *&head, Node *&tail, int data)
{
  // if LL is empty

  if (head == NULL)
  {
    Node *newNode = new Node(data);
    head = newNode;
    tail = newNode;
  }
  else
  {
    Node *newNode = new Node(data);
    newNode->next = head;

    // head or tail ko update kro
    head->prev = newNode;
    head = newNode;
  }
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
  // if LL is empty
  if (head == NULL)
  {
    Node *newNode = new Node(data);
    head = newNode;
    tail = newNode;
  }
  // LL is non empty
  else
  {
    Node *newNode = new Node(data);
    newNode->prev = tail;
    tail->next = newNode;
    // tail ko update kro
    tail = newNode;
  }
}

void insertAtPosition(Node *&head, Node *&tail, int data, int position)
{
  // if LL is empty
  int len = findLength(head);

  if (head == NULL)
  {
    Node *newNode = new Node(data);
    head = newNode;
    tail = newNode;
  }
  else if (position == 1)
  {
    // insert at head
    insertAtHead(head, tail, data);
  }
  else if (position == len + 1)
  {
    // insert at tail
    insertAtTail(head, tail, data);
  }
  else
  {
    // insert at given position

    // step1: create node
    Node *newNode = new Node(data);
    // step2: currNode and prevNOde
    Node *prevNode = NULL;
    Node *currNode = head;
    while (position != 1)
    {
      position--;
      prevNode = currNode;
      currNode = currNode->next;
    }

    // step3: pointers set krne h
    prevNode->next = newNode;
    newNode->prev = prevNode;
    currNode->prev = newNode;
    newNode->next = currNode;
  }
}

void deleteNode(Node *&head, Node *&tail, int position)
{
  int len = findLength(head);

  if (head = NULL)
  {
    cout << "can't delete !!!";
    return;
  }
  if (position == 1)
  {
    // delete from start
    Node *temp = head;
    head = head->next;
    temp->next = NULL;
    head->prev = NULL;

    delete temp;
  }
  else if (position == len)
  {
    // delete from end
    Node *prevNode = tail->prev;
    prevNode->next = NULL;
    tail->prev = NULL;
    delete tail;
    // update tail
    tail = prevNode;
  }
  else
  {
    // delete from at given position

    // step1: set prev/cur/next ptr
    Node *prevNode = NULL;
    Node *currNode = head;

    while (position != 1)
    {
      position--;
      prevNode = currNode;
      currNode = currNode->next;
    }

    Node *nextNode = currNode->next;

    // step2: potnters ko update krna h
    prevNode->next = nextNode;
    currNode->prev = NULL;
    currNode->next = NULL;

    nextNode->prev = prevNode;

    delete currNode;
  }
}

int main()
{
  Node *head = NULL;
  Node *tail = NULL;

  insertAtHead(head, tail, 20);
  insertAtHead(head, tail, 30);
  insertAtHead(head, tail, 40);
  insertAtHead(head, tail, 50);

  printDLL(head);

  // insertAtPosition(head, tail, 2000, 3);
  // printDLL(head);

  // deleteNode(head, tail, 1);
  // cout << findLength(head);
  // printDLL(head);

  deleteNode(head, tail, 3);

  printDLL(head);
  return 0;
}