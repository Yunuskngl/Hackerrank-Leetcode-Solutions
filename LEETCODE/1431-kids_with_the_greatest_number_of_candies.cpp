//SOLUTION:

//https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/description/

/*class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>ans;
        vector<int>tmp;
        tmp = candies;
        int n = tmp.size();
        sort(tmp.begin(),tmp.end());
        int max  = tmp[n-1];
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=max) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};*/