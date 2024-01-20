#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

// Function to print the doubly linked list
void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// gives length of Linked List
int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }

    return len;
}

void insertAtHead(Node *&tail, Node *&head, int d)
{

    // empty list
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    // Print the doubly linked list
    // print(head);
    // cout << getLength(head) << endl;
    insertAtHead(tail, head, 11);
    // print(head);
    // cout << "head  " << head->data << endl;
    // cout << "tail  " << tail->data << endl;

    insertAtHead(tail, head, 13);
    // print(head);
    // cout << "head  " << head->data << endl;
    // cout << "tail  " << tail->data << endl;

    insertAtHead(tail, head, 8);
    print(head);
    // cout << "head  " << head->data << endl;
    // cout << "tail  " << tail->data << endl;

    return 0;
}