//SOLUTION:

//https://leetcode.com/problems/range-sum-of-sorted-subarray-sums/

/*class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        long long s = 0;
        vector<long long> sum;
        for (int i = 0; i < nums.size(); i++) {
            s = 0;
            for (int j = i; j < nums.size(); j++) {
                s += nums[j];
                sum.push_back(s);
            }
        }
        
        long long newsum = 0;
        sort(sum.begin(), sum.end());
        for (int i = 0; i < sum.size(); i++) {
            if (i >= left - 1 && i <= right - 1) {
                newsum += sum[i];
            }
        }
        return static_cast<int>(newsum % 1000000007);
    }
};*/
