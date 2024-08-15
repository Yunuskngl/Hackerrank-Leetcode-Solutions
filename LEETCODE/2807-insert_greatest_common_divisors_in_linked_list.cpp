//SOLUTION: 

//https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/description/

/**
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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        int n1,n2;
        ListNode* temp = head;
        while(temp->next!=NULL){
            n1 = temp->val;
            n2 = temp->next->val;
            int gcd = __gcd(n1,n2);
            ListNode* newNode = new ListNode(gcd);
            newNode->next = temp->next;
            temp->next = newNode;
            temp = temp->next->next;

        }
        return head;

    }
}; */