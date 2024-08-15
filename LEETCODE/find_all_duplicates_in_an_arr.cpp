//SOLUTION:

//https://leetcode.com/problems/find-all-duplicates-in-an-array/

/*class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>harita;
        vector<int>sonuc;
        for(int i=0;i<nums.size();i++){
            harita[nums[i]]++;
            if(harita[nums[i]]==2){
                sonuc.push_back(nums[i]);
            }
        }
        return sonuc;

    }
};*