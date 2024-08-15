//SOLUTION:

//https://leetcode.com/problems/majority-element/description/?envType=daily-question&envId=2024-02-12

/*
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int a,c=0;
        int n = nums.size();
        for(int i = 0 ; i<n ; i++){
            if(c == 0) a=nums[i];
            if(nums[i] == a) c++;
            else c--;
        }
        return a;
    }
};
*/