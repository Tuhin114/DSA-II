// CodeStudio - MergeSort Linked List
//  https://www.codingninjas.com/studio/problems/mergesort-linked-list_630514?leftPanelTab=0%3Fsource%3Dyoutube&campaign=YouTube_CodestudioLovebabbar5thfeb&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_CodestudioLovebabbar5thfeb&leftPanelTabValue=PROBLEM

/********************************************************************

    Following is the representation of the Singly Linked List Node:

    class node{
        public:
            int data;
            node * next;
            node(int data){
                this->data=data;
                this->next=NULL;
            }
    };

********************************************************************/
// node* findMid(node* head){
//     node* slow = head;
//     node* fast = head -> next;

//     while(fast != NULL && fast -> next != NULL){
//         slow = slow -> next;
//         fast = fast -> next -> next;
//     }
//     return slow;
// }

// node* merge(node* left, node* right){
//     if(left == NULL){
//         return right;
//     }
//     if(right == NULL){
//         return left;
//     }

//     node* ans = new node(-1);
//     node* temp = ans;

//     //Merge 2 sorted LL
//     while(left != NULL && right != NULL){
//         if(left -> data < right -> data){
//             temp -> next = left;
//             temp = left;
//             left = left -> next;
//         }else{
//             temp -> next = right;
//             temp = right;
//             right = right -> next;
//         }
//     }

//     while(left != NULL){
//         temp -> next = left;
//         temp = left;
//         left = left -> next;
//     }

//     while(right != NULL){
//         temp -> next = right;
//         temp = right;
//         right = right -> next;
//     }
//     ans = ans -> next;
//     return ans;
// }

// node* mergeSort(node *head) {
//     //Base Case
//     if(head == NULL || head -> next == NULL){
//         return head;
//     }

//     //Break LL into two parts after finding mid
//     node* mid = findMid(head);

//     node* left = head;
//     node* right = mid -> next;
//     mid -> next = NULL;

//     //Recursive Calls to sort both halvs
//     left = mergeSort(left);
//     right = mergeSort(right);

//     //Merge both left and right halvs
//     node* result = merge(left,right);

//     return result;
// }
