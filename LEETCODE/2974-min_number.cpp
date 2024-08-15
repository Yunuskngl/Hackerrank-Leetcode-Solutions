//SOLUTION:

//https://leetcode.com/problems/number-game/discuss/1510984/C%2B%2B-Simple-Solution

/*class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int>vek;
        sort(nums.begin(),nums.end());
        int size = nums.size();
        for(int i=0 ;i<size;i+=2){
            vek.push_back(nums[i+1]);
            vek.push_back(nums[i]);
        }
        return vek;
    }
};*/