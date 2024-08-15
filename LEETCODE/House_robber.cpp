/*SOLUTION:

//https://leetcode.com/problems/house-robber/

class Solution {
public:
    int rob(vector<int>& nums) {
        int s = nums.size();
        if (s == 0) return 0;
        int b = 0, a = 0; 
        for (int i = s- 1; i >= 0; i--) {
            int current = max(nums[i] + b, a);
            b = a;
            a = current;
        }
        return a;
    }
};
*/