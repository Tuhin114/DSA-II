// CodeStudio - Remove duplicates from a sorted Doubly Linked List
//  https://www.codingninjas.com/studio/problems/unique-sorted-list_2420283?leftPanelTab=0%3Fsource%3Dyoutube&campaign=YouTube_Lovebabbar29thJan&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_Lovebabbar29thJan&leftPanelTabValue=PROBLEM

/**
 * Definition of doubly linked list:
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this->data = data;
 *          this->prev = prev;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

// Node * removeDuplicates(Node *head)
// {
//     //Empty List
//     if(head == NULL){
//         return NULL;
//     }

//     //Non Empty List
//     Node* curr = head;
//     while(curr != NULL){
//         if((curr -> next != NULL) && curr -> data == curr -> next -> data){
//             Node* next_next = curr -> next -> next;
//             Node* nodeToDelete = curr -> next;
//             delete(nodeToDelete);
//             curr -> next = next_next;
//         }else{
//             //Not Equal
//             curr = curr -> next;
//         }
//     }
//     return head;
// }