/*SOLUTION:

//https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>newvec;
        newvec.push_back(nums[0]);
        for(int i=1 ; i< nums.size(); i++){
            
                if(  nums[i] !=nums[i-1]){
                    newvec.push_back(nums[i]);
                }
        }
        nums = newvec;
        int k = newvec.size();
        return k;
    }
};
*/