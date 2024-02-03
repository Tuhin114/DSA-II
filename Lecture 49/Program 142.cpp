// CodeStudio -  Sort linked list of 0s 1s 2s
// https://www.codingninjas.com/studio/problems/sort-linked-list-of-0s-1s-2s_1071937?leftPanelTab=0%3Fsource%3Dyoutube&campaign=YouTube_Lovebabbar31stJan2021&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_Lovebabbar31stJan2021&leftPanelTabValue=PROBLEM

/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

// Approach 1
//  Node* sortList(Node *head){
//      int zeroCount = 0;
//      int oneCount = 0;
//      int twoCount = 0;

//     Node* temp = head;
//     while(temp != NULL){
//         if(temp -> data == 0){
//             zeroCount++;
//         }else if(temp -> data == 1){
//             oneCount++;
//         }else if(temp -> data == 2){
//             twoCount++;
//             temp = temp -> next;
//         }
//     }
//     temp = head;
//     while(temp != NULL){
//         if(zeroCount != 0){
//             temp -> data = 0;
//             zeroCount--;
//         }else if(oneCount != 0){
//             temp -> data = 1;
//             oneCount--;
//         }else if(twoCount != 0){
//             temp -> data = 2;
//             twoCount--;
//         }
//         temp = temp -> next;
//     }
//     return head;
// }

// Approach 2
// void insertAtTail(Node* &tail, Node* curr) {
//     tail -> next = curr;
//     tail = curr;
// }

// Node* sortList(Node *head){
//     Node* zeroHead = new Node(-1);
//     Node* zeroTail = zeroHead;
//     Node* oneHead = new Node(-1);
//     Node* oneTail = oneHead;
//     Node* twoHead = new Node(-1);
//     Node* twoTail = twoHead;

//     Node* curr = head;

// Create separate list 0s, 1s and 2s
//  while(curr != NULL){
//      int value = curr -> data;
//      if(value == 0){
//          insertAtTail(zeroTail, curr);
//      }else if(value == 1){
//          insertAtTail(oneTail, curr);
//      }else if(value == 2){
//          insertAtTail(twoTail, curr);
//      }

//     curr = curr -> next;
// }
// Merge 3 sublist
// 1s list is not empty
// if(oneHead -> next != NULL){
//     zeroTail -> next = oneHead -> next;
// }else{
// 1s list -> empty
//     zeroTail -> next = twoHead -> next;
// }
// oneTail -> next = twoHead -> next;
// twoTail -> next = NULL;

// SetUp head
//  head = zeroHead -> next;

// Delete dummy nodes
//     delete zeroHead;
//     delete oneHead;
//     delete twoHead;

//     return head;
// }