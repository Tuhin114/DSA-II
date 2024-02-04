// GeeksforGeeks - Add two numbers represented by linked lists
// To see solutions visit the link
// https://www.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1

// CodeStudio -  Add Two Numbers
//  https://www.codingninjas.com/studio/problems/add-two-numbers-as-linked-lists_1170520?interviewProblemRedirection=true&leftPanelTabValue=PROBLEM

/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

// void insertattail(Node* &head,Node* &tail,int val){

//     Node* temp = new Node(val);

//     if(head == NULL){
//         head = temp;
//         tail = temp;
//         return ;

//     }else{

//        tail->next = temp;
//        tail = temp;
//     }

// }

// Node *add(Node *first,Node *second){

//     int carry = 0;
//     Node *head = NULL;
//     Node *tail = NULL;

//     while(first!=NULL && second!=NULL){

//         int sum = first->data + second->data + carry;
//         int digit = sum%10;
//         insertattail(head,tail,digit);
//         carry = sum/10;
//         first = first->next;
//         second = second->next;
//     }

//     while(first!=NULL){

//         int sum = first->data + carry;
//         int digit = sum%10;
//         insertattail(head,tail,digit);
//         carry = sum/10;
//         first = first->next;
//     }

//     while(second!=NULL){

//         int sum = second->data + carry;
//         int digit = sum%10;
//         insertattail(head,tail,digit);
//         carry = sum/10;
//         second = second->next;
//     }

//     while(carry!=0){

//         int sum = carry;
//         int digit = sum%10;
//         insertattail(head,tail,digit);
//         carry = sum/10;

//     }
//     return head;
// }

// Node *reverse(Node *head){

//     Node* crr=head;
//     Node *pre=NULL;
//     Node *forward=NULL;

//     while(crr!=NULL){
//         forward = crr->next;
//         crr->next = pre;
//         pre = crr;
//         crr = forward;
//     }
//     return pre;
// }

// Node *addTwoNumbers(Node *num1, Node *num2)

// {
//    Node *ans = add(num1,num2);
//    return ans;
// }
