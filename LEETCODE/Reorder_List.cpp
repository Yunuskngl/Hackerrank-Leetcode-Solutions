//SOLUTION:

//https://leetcode.com/problems/reorder-list/

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
    void reorderList(ListNode* head) {
        vector<ListNode*> v;
        ListNode* temp = head;
        while(temp != NULL) {
            v.push_back(temp);
            temp = temp->next;
        }
        int n = v.size();
        if(n == 0) return;
        if(n == 1) return;
        if(n == 2) return;
        if(n == 3) {
            v[0]->next = v[2];
            v[2]->next = v[1];
            v[1]->next = NULL;
            return;
        }
        int i = 0;
        int j = n - 1;
        while(i < j) {
            v[i]->next = v[j];
            v[j]->next = v[i+1];
            i++;
            j--;
        }
        if(i == j) {
            v[i]->next = NULL;
        }
        else {
            v[i]->next = NULL;
        }
        
        
    }
};
 */