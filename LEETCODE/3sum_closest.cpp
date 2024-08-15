//SOLUTION:

//https://leetcode.com/problems/3sum-closest/

/*class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int sum = 0;
        int i, j, k;
        int n = nums.size();
        int closest = nums[0] + nums[1] + nums[2];
        sort(nums.begin(), nums.end());
        for (i = 0; i < n - 2; i++) {
            j = i + 1;
            k = n - 1;
            while (j < k) {
                sum = nums[i] + nums[j] + nums[k];
                if (abs(target - sum) < abs(target - closest)) {
                    closest = sum;
                }
                if (sum > target) {
                    k--;
                } else {
                    j++;
                }
            }
        }
        return closest;
    }
};*/