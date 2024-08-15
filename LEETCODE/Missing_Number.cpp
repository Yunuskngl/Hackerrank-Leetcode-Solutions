//SOLUTION : 

//https://leetcode.com/problems/missing-number/

/*class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = n*(n+1)/2;
        int sum2 = 0;
        for(int i=0;i<n;i++){
            sum2 += nums[i];
        }
        if(sum2 == sum){
            for(int i=0;i<n;i++){
                if(nums[i] != 0) return 0;
            }
            return n+1;
        }
        if(sum2 < sum){
            return sum-sum2;
        }
        return 0;
    }
}; */