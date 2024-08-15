/*SOLUTION:

//https://leetcode.com/problems/remove-element/description/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>nums2;
        for(int i=0;i<nums.size();i++){
            if(val != nums[i]){
                nums2.push_back(nums[i]);   
            }
        }
        nums = nums2;
        return nums.size();
    }
};

*/