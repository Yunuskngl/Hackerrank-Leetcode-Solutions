//SOLUTION:

//https://leetcode.com/problems/custom-sort-string/

/*
class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> mp;
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }
        string ans = "";
        for (int i = 0; i < order.size(); i++) {
            if (mp.find(order[i]) != mp.end()) {
                for (int j = 0; j < mp[order[i]]; j++) {
                    ans += order[i];
                }
                mp.erase(order[i]);
            }
        }
        for (auto it = mp.begin(); it != mp.end(); it++) {
            for (int i = 0; i < it->second; i++) {
                ans += it->first;
            }
        }
        return ans;
    }
};*/