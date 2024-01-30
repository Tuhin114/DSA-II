// CodeStudio- Reverse List In K Groups
// https://www.codingninjas.com/studio/problems/reverse-list-in-k-groups_983644?leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbar_codestudio_26thjan&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar_codestudio_26thjan&leftPanelTabValue=PROBLEM

/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

// Node* kReverse(Node* head, int k) {
//     // Base Call
//     if (head == nullptr || k <= 1) {
//         return head;
//     }

//     // Count the number of nodes
//     int count = 0;
//     Node* temp = head;
//     while (temp != nullptr) {
//         count++;
//         temp = temp->next;
//     }

//     // Step 1: Reverse full groups of k nodes
//     if (count >= k) {
//         Node* next = nullptr;
//         Node* curr = head;
//         Node* prev = nullptr;
//         int reversedCount = 0;

//         while (curr != nullptr && reversedCount < k) {
//             next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//             reversedCount++;
//         }

//         // Step 2: Recursion for the next group
//         if (next != nullptr) {
//             head->next = kReverse(next, k);
//         }

//         // Step 3: Return the new head of the reversed portion
//         return prev;
//     } else {
//         // If there are less than k nodes, no reversal needed
//         return head;
//     }
// }