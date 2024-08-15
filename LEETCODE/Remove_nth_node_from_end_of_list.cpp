/*

 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode* a = head; ListNode* q = head;
       while(a -> next){
         a = a->next;
         if(n == 0){
           q = q->next;
         }
         else{
           n--;
         }
       }
       if(n == 1){
         q = head;
         head = head -> next;
         delete q;
       }
       else {
         a = q->next;
         q->next = a->next;
         delete a;
       }
       return head; 
    }
};
*/
