//SOLUTION:

//https://leetcode.com/problems/most-frequent-even-element/submissions/1347122245/

/*
class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>a;
        for(int i=0;i<nums.size();i++){
            a[nums[i]]++;
        }
        int max=0;
        int ans=-1;
        for(auto i:a){
            if(i.first%2==0 && i.second>max){
                max=i.second;
                ans=i.first;
            }
        }
        return ans;

    }
};*/