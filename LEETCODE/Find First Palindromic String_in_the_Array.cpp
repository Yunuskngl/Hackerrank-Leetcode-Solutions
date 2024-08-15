//SOLUTION:

//https://leetcode.com/problems/find-first-palindromic-string-in-the-array/description/?envType=daily-question&envId=2024-02-13

/*
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int n = words.size();
        for(int i = 0; i < n; i++) {
            int s = words[i].size();
            int j = 0;
            int flag = 0;
            while (j < s) {
                if(words[i][j] != words[i][s-1]) {
                    flag = 1;
                    break;
                } 
                j++;
                s--;
            }
            if(flag == 0) return words[i];
        }
        return ""; 
    }
};
*/