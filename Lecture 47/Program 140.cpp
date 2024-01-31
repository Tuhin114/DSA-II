// CodeStudio - Detect and Remove Loop
// https://www.codingninjas.com/studio/problems/interview-shuriken-42-detect-and-remove-loop_241049?leftPanelTab=0%3Fsource%3Dyoutube&campaign=YouTube_codestudio_lovebabbar28thjan&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_codestudio_lovebabbar28thjan&leftPanelTabValue=PROBLEM

/*************************************************

    class Node {
        public :

        int data;
        Node *next;

        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
    };

*************************************************/
// Floyd cycle Algorithm
// Node* detectLoop(Node *head){

//     if(head == NULL){
//         return NULL;
//     }

//     Node *fast = head;
//     Node *slow = head;

//     while(fast != NULL){
//         fast = fast->next;
//         if(fast != NULL){
//             fast = fast -> next;
//         }
//         slow = slow->next;
//         if(fast==slow){
//             return slow;
//         }
//     }

//     return NULL;
// }

// Node* getStartingNode(Node* head){

//     if(head == NULL){
//         return NULL;
//     }

//     Node * intersection = detectLoop(head);
//     if(intersection == NULL){
//         return NULL;
//     }
//     Node* slow = head;

//     while(slow != intersection){
//         slow = slow->next;
//         intersection = intersection->next;
//     }

//     return slow;

// }

// Node *removeLoop(Node *head)
// {
//     if(head == NULL){
//         return NULL;
//     }

//     Node* start = getStartingNode(head);
//     if(start == NULL){
//         return head;
//     }
//     Node* temp = start;

//     while(temp->next != start){
//         temp = temp->next;
//     }

//     temp-> next = NULL;

//     return head;

// }