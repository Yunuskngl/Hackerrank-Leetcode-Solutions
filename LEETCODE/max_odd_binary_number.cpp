//SOLUTION : 

//https://leetcode.com/problems/maximum-odd-binary-number/description/?envType=daily-question&envId=2024-03-01,
/*
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n=s.size(),k=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1') k++;
        }
        if(k>0){
            s[n-1] ='1';k--;
        }
        for(int i=0;i<n-1;i++){
            if(k>0){
                s[i]='1';
                k--;
            }
            else s[i]='0';
        }
        return s;
    }
};
*/