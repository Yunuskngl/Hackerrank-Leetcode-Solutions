/*SOLUTION: 

//https://leetcode.com/problems/palindrome-number/description/

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
        return false;
        }
        long long secondnum=0; 
        int tx = x;
        while(tx>0){
            int temp = tx % 10;
            tx= tx/10;
            secondnum = secondnum * 10 + temp;
            
        }
        if(secondnum == x ){
            return true;
        }
        else{
            return false;
        }
    }
};

*/