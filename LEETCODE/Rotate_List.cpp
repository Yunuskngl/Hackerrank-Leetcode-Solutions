//SOLUTION :

//https://leetcode.com/problems/rotate-list/

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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) {
            return head;
        }
        int len = 1;
        ListNode* a = head;
        while (a->next) {
            a = a->next;
            ++len;
        }
        k = k % len;
        k = len - k;       
        a->next = head;       
        while (k--) {
            a = a->next;
        }        
        head = a->next;
        a->next = nullptr;

        return head;
    }
};*/