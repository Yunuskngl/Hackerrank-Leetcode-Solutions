//SOLUTION:

//https://leetcode.com/problems/binary-subarrays-with-sum/

/*class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        int sum = 0;
        unordered_map<int, int> count;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            count[sum]++;
            sum += nums[i];
            ans += count[sum - goal];
        }
        return ans;
    }
};*/