//SOLUTION:

//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

/*
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> arr(2, -1);
        int n = nums.size();
        for(int i = 0 ; i<n ; i++){
            if(target == nums[i]){
                arr[0] = i;
                break;
                
            }
            
        }
        if(arr[0] == -1){
            return arr;
        }
        for(int j = arr[0] ; j<n ; j++){
            if(target != nums[j]){
                break;
            }
            arr[1] = j;
        }
        return arr;
    }
};*/