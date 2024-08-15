//SOLUTION:

//https://leetcode.com/problems/palindrome-linked-list/

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
    bool isPalindrome(ListNode* head) {
        int n = 0;
        ListNode* temp = head;
        while(temp != NULL) {
            n++;
            temp = temp->next;
        }
        if(n == 1) return true;
        if(n == 2) {
            if(head->val == head->next->val) return true;
            else return false;
        }
        if(n == 3) {
            if(head->val == head->next->next->val) return true;
            else return false;
        }
        int mid = n/2;
        ListNode* temp2 = head;
        for(int i = 0; i < mid; i++) {
            temp2 = temp2->next;
        }
        ListNode* prev = NULL;
        ListNode* curr = temp2;
        ListNode* next = NULL;
        while(curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        temp = head;
        temp2 = prev;
        for(int i = 0; i < mid; i++) {
            if(temp->val != temp2->val) return false;
            temp = temp->next;
            temp2 = temp2->next;
        }
        return true;

    }
}; */