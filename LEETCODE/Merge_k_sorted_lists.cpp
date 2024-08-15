//SOLUTION: 

//https://leetcode.com/problems/merge-k-sorted-lists/

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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> vec;
        
       
        for(int i = 0; i < lists.size(); i++){
            ListNode* current = lists[i];
            while(current != nullptr){
                vec.push_back(current->val);
                current = current->next;
            }
        }
        
     
        sort(vec.begin(), vec.end());
        
      
        ListNode* dummy = new ListNode(-1);
        ListNode* current = dummy;
        
        for(int i = 0; i < vec.size(); i++){
            current->next = new ListNode(vec[i]);
            current = current->next;
        }
        
        return dummy->next;
    }
};
*/
