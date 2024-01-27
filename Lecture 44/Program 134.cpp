// Circular Linked List
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    // Destructure
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << " Memory is free for node with data " << value << endl;
    }
};

void insertNode(Node *&tail, int element, int d)
{

    // Empty List
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // Non-Empty list

        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }

        // Element found -> curr is rerpresenting element node
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node *tail)
{
    Node *temp = tail;
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

int main()
{
    Node *tail = NULL;
    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 12);
    print(tail);

    insertNode(tail, 12, 4);
    print(tail);

    insertNode(tail, 4, 7);
    print(tail);

    insertNode(tail, 12, 6);
    print(tail);
    return 0;
}