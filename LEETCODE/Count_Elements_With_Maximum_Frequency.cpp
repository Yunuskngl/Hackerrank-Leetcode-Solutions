//SOLUTION:

//https://leetcode.com/problems/count-elements-with-maximum-frequency/

/*
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> temp(101, 0);
        int max_count = 0, a = 0; 
        for(int i = 0; i < nums.size(); ++i)
        {
            temp[nums[i]]++;
            if(temp[nums[i]] > max_count)
            {
                max_count = temp[nums[i]];
                a = max_count;
            }
            else if(temp[nums[i]] == max_count)
                a += max_count;
        }
        return a;
    }
};*/