//SOLUTION:

//https://leetcode.com/problems/find-if-digit-game-can-be-won/

/*class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum1 = 0,sum2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<10) sum1 += nums[i];
            else if(nums[i]>=10) sum2 += nums[i];
        }
        if(sum1 == sum2) return false;
        else return true;
    }
};*/