// CodeStudio - Reverse Linked List
// https://codingninjas.com/studio/problems/reverse-the-singly-linked-list_799897?source=youtube&campaign=Lovebabbarcodestudio_24thJan&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio_24thJan&leftPanelTabValue=PROBLEM

// #include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

// Approach-1
//  LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head)
//  {
//      if (head == NULL || head->next == NULL)
//      {
//          return head;
//      }
//      LinkedListNode<int> *prev = NULL;
//      LinkedListNode<int> *curr = head;
//      LinkedListNode<int> *forward = NULL;

//     while (curr != NULL)
//     {
//         forward = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = forward;
//     }
//     return prev;
// }

// Approach-2
//  void reverse(LinkedListNode<int>* &head, LinkedListNode<int>* curr, LinkedListNode<int>* prev){
//      //Base Class
//      if(curr == NULL){
//          head = prev;
//          return;
//      }

//     LinkedListNode<int>* forward = curr -> next;
//     reverse(head, forward, curr);
//     curr -> next = prev;
// }

// LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head)
// {
//     LinkedListNode<int>* curr = head;
//     LinkedListNode<int>* prev = NULL;
//     reverse(head, curr, prev);
//     return head;
// }

// Approach-3
// It will return head of the reverse list
//  LinkedListNode<int>* reverse1(LinkedListNode<int>* head){
//      //Base case
//      if(head == NULL || head->next == NULL){
//          return head;
//      }

//     LinkedListNode<int>* smallHead = reverse1(head->next);

//     head -> next -> next = head;
//     head -> next = NULL;

//     return smallHead;
// }

// LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head)
// {
//     return reverse1(head);
// }