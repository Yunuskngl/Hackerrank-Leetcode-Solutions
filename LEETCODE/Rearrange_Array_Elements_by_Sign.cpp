//SOLUTION:

//https://leetcode.com/problems/rearrange-array-elements-by-sign/description/?envType=daily-question&envId=2024-02-14


/*

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>numsnegative;
        vector<int>numspositive;
        vector<int>res;

        for(int i = 0 ; i<nums.size();i++){
            if(nums[i]<0) numsnegative.push_back(nums[i]);
        }
        for(int j = 0 ; j<nums.size();j++){
            if(nums[j]>0) numspositive.push_back(nums[j]);
        }
        for(int k=0;k<numspositive.size();k++){
            res.push_back(numspositive[k]);
            res.push_back(numsnegative[k]);
        }
        return res;
    }
};*/