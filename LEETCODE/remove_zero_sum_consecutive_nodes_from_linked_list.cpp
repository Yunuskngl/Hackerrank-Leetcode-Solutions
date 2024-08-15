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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        unordered_map<int, ListNode*> map;
        map[0] = dummy;
        int sum = 0;
        while (head) {
            sum += head->val;
            if (map.find(sum) != map.end()) {
                ListNode* prev = map[sum];
                ListNode* start = prev;
                int temp = sum;
                while (prev != head) {
                    prev = prev->next;
                    temp += prev->val;
                    if (prev != head) {
                        map.erase(temp);
                    }
                }
                start->next = head->next;
            } else {
                map[sum] = head;
            }
            head = head->next;
        }
        return dummy->next;
    }
}; */