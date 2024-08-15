//SOLUTION:

//https://leetcode.com/problems/find-target-indices-after-sorting-array/description/

/*class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int>index;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == target){
                index.push_back(i);
            }
            else if(nums[i]>target){
                break;
            }
        }
        return index;
    }
};*/