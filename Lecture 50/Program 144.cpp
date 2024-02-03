// CodeStudio - Palindrome Linked List
//  https://www.codingninjas.com/studio/problems/palindrom-linked-list_799352?interviewProblemRedirection=true&leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
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

// Approach 1
//  bool checkPalindrome(vector<int> arr){
//      int n = arr.size();
//      int s = 0;
//      int e = n - 1;

//     while(s <= e){
//         if(arr[s] != arr[e]){
//             return 0;
//         }
//         s++;
//         e--;
//     }
//     return 1;
// }

// bool isPalindrome(LinkedListNode<int> *head) {
//     vector<int> arr;
//     LinkedListNode<int>* temp = head;
//     while(temp != NULL){
//         arr.push_back(temp -> data);
//         temp = temp -> next;
//     }
//     return checkPalindrome(arr);
// }

// Approach 2
//  LinkedListNode<int>* getMid(LinkedListNode<int>* head){

//     LinkedListNode<int>* slow = head;
//     LinkedListNode<int>* fast = head->next;

//     while(fast != NULL && fast->next != NULL){
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//     return slow;
// }

// LinkedListNode<int>* reverse(LinkedListNode<int>* head){
//     LinkedListNode<int>* pre = NULL;
//     LinkedListNode<int>* curr = head;
//     LinkedListNode<int>* next = NULL;

//     while(curr != NULL){
//         next = curr->next;
//         curr->next = pre;
//         pre = curr;
//         curr= next;
//     }
//     return pre;
// }

// bool isPalindrome(LinkedListNode<int> *head) {

//     if(head == NULL || head->next == NULL){
//         return true;
//     }

//     // Step 1 -> Find Middle
//     LinkedListNode<int>* middle = getMid(head);

//     // Step 2 -> reverse list after Middle
//     LinkedListNode<int>* temp = middle->next;
//     middle->next = reverse(temp);

//     // Step 3 -> Compare both halves
//     LinkedListNode<int>* head1 = head;
//     LinkedListNode<int>* head2 = middle->next;

//     while(head2 != NULL){
//         if(head1->data != head2->data){
//             return false;
//         }
//         head1 = head1->next;
//         head2 = head2->next;
//     }

//         // Step 4 -> Repeat step 2
//         temp = middle->next;
//         middle->next = reverse(temp);

//         return true;
// }