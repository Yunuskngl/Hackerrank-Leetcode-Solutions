//SOLUTION:

//https://leetcode.com/problems/contiguous-array/

/*
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        zero = 0;
        one = 0;
        int n = nums.size();
        int ans = 0;
        unordered_map<int, int> count;
        count[0] = -1;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                zero++;
            } else {
                one++;
            }
            int diff = zero - one;
            if (count.find(diff) != count.end()) {
                ans = max(ans, i - count[diff]);
            } else {
                count[diff] = i;
            }
        }
        return ans;

    }
};*/