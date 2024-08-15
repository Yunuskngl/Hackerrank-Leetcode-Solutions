//SOLUTION: 

//https://leetcode.com/problems/intersection-of-two-arrays/description/

/*
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         set<int>s(nums1.begin(),nums1.end());
         vector<int>k;
         for(int i: nums2)
         if(s.erase(i)!=0)
         k.push_back(i);
         return k;
    }
};
*/