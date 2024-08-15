//SOLUTION: 

//https://leetcode.com/problems/palindromic-substrings/

/*
class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size();
        unordered_map<string, int> dp;
        for (int i = 0; i < n; i++) {
            dp[s.substr(i, 1)]++;
            if (i > 0 && s[i] == s[i - 1]) {
                dp[s.substr(i - 1, 2)]++;
            }
        }
        for (int len = 3; len <= n; len++) {
            for (int i = 0; i + len <= n; i++) {
                string sub = s.substr(i, len);
                if (sub[0] == sub[len - 1] && dp.count(sub.substr(1, len - 2))) {
                    dp[sub]++;
                }
            }
        }
        int ans = 0;
        for (auto& [k, v] : dp) {
            ans += v;
        }
        return ans;

        
    }

    
};*/