//SOLUTION:

//https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

/*
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int>res;
        for(int i = 1 ; i<=n ;i++){
            res.push_back(i);
        }
        for(int i = 0 ; i<n ; i++){
            res[nums[i]-1] = 0;
        }
        for(int i = 0 ; i<n ; i++){
            if(res[i] == 0){
                res.erase(res.begin()+i);
                i--;
                n--;
            }
        }

        
        return res;
    }
};
*/