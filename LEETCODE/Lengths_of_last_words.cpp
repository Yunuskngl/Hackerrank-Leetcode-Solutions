/*SOLUTION: 

//https://leetcode.com/problems/length-of-last-word/description/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int k=0,last = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] != ' '){
                k++;
                last = k;
            }
            else{
                 k = 0;
            }
        }
        return last;
    }
};


*/