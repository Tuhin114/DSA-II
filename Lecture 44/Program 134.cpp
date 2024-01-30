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

void deleteNode(Node *&tail, int value)
{

    // Empty List
    if (tail == NULL)
    {
        cout << " List is empty, please check again " << endl;
    }
    else
    {
        // Non empty
        // Assuming that "value" is present in the linked List
        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        // 1 Node Linked List
        if (curr == prev)
        {
            tail = NULL;
        }

        //>=2 Node linked list
        else if (tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

bool isCircularList(Node *head)
{
    // Empty list
    if (head == NULL)
    {
        return false;
    }

    Node *temp = head->next;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    if (temp == head)
    {
        return true;
    }

    return false;
}

void print(Node *tail)
{
    Node *temp = tail;

    // Empty List
    if (tail == NULL)
    {
        cout << "List is Empty " << endl;
        return;
    }
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

    // insertNode(tail, 12, 4);
    // print(tail);

    // insertNode(tail, 4, 7);
    // print(tail);

    // insertNode(tail, 12, 6);
    // print(tail);

    // deleteNode(tail, 3);
    // print(tail);

    // deleteNode(tail, 3);
    // print(tail);

    if (isCircularList(tail))
    {
        cout << "LinkedList is circular" << endl;
    }
    else
    {
        cout << "LinkedList is not circular" << endl;
    }

    return 0;
}