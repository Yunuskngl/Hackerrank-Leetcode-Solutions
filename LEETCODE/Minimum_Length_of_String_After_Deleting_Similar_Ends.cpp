// SOLUTION:

//https://leetcode.com/problems/minimum-length-of-string-after-deleting-similar-ends/

/*
class Solution {
public:
    int minimumLength(string s) {
        int left=0,right=s.size()-1;
        while(left<right) {
            if(s[left]!=s[right]) {
                return right-left+1;
            }
            char c=s[left];
            while(left<=right && s[left]==c) {
                left++;
            }
            while(left<=right && s[right]==c) {
                right--;
            }
        }
        return right-left+1;
    }
};*/
