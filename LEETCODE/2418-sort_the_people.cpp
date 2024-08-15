//SOLUTION:

//https://leetcode.com/problems/sort-the-people/discuss/1510984/C%2B%2B-Simple-Solution

/*class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string> mp;
        int n = heights.size();
        for(int i=0;i<n;i++){
            mp[heights[i]]  = names[i];
        }
        vector<string>sonuc;
        auto i = mp.end();
        i--;
        while(it != mp.begin()){
            sonuc.push_back(i->second);
            i--;
        }
        sonuc.push_back(i->second);
        return sonuc;
        
    }
};*/