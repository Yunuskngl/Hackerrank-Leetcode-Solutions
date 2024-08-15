/*SOLUTION : 

//https://leetcode.com/problems/search-insert-position/description/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0;i<nums.size();i++){
            auto lwn = lower_bound(nums.begin(),nums.end(),target);
            if(lwn != nums.end()){
                return distance(nums.begin(), lwn);
            }
            else{
                return n;
            }
        }
        return 0;
    }
};

*/