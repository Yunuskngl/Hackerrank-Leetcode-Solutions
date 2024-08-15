/*
SOLUTION:

//https://leetcode.com/problems/largest-divisible-subset/

class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int s = nums.size();
        if(s == 0) return {};
        sort(nums.begin(), nums.end());
        vector<int> vec1(s, 1);
        vector<int> vec2(s, -1);
        int maxIndex = 0;
        for(int i = 1; i < s; i++){
            for(int j = 0; j < i; j++){
                if(nums[i] % nums[j] == 0){
                    if(vec1[i] < vec1[j] + 1){
                        vec1[i] = vec1[j] + 1;
                        vec2[i] = j;
                    }
                }
            }
            if(vec1[i] > vec1[maxIndex]){
                maxIndex = i;
            }
        }
        vector<int> res;
        int i = maxIndex;
        while(i >= 0){
            res.push_back(nums[i]);
            i = vec2[i];
        }
        return res;
    }

};*/