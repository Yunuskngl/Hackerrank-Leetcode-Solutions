//SOLUTION : 

//https://leetcode.com/problems/degree-of-an-array/

/*class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> left, right, count;
        int degree = 0;
        for(int i = 0 ; i<nums.size() ; i++){
            if(left.find(nums[i]) == left.end()){
                left[nums[i]] = i;
            }
            right[nums[i]] = i;
            count[nums[i]]++;
            degree = max(degree, count[nums[i]]);
        }
        int res = nums.size();
        for(auto it : count){
            if(it.second == degree){
                res = min(res, right[it.first] - left[it.first] + 1);
            }
        }
        return res;
    }
};*/