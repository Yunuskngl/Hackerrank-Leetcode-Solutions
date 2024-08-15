//SOLUTION:

//https://leetcode.com/problems/valid-anagram/description/

/*
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        unordered_map<char,int>m;
        unordered_map<char,int>m1;
        for(int i = 0; i < s.length(); i++){
            m[s[i]]++;
            m1[t[i]]++;
        }
        for(int i = 0; i < s.length(); i++){
            if(m[s[i]] != m1[s[i]]) return false;
        }
        return true;
    }
};*/