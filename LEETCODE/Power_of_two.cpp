//SOLUTION:

//https://leetcode.com/problems/power-of-two/description/?envType=daily-question&envId=2024-02-19

/*
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 1) return true;
        if(n<0) return false;
        if(n%2 != 0) return false;
        else{
            for(int i=1;i<32;i++){
                if(n == pow(2,i)) return true;
            }
            return false;
        }
    }
};
*/