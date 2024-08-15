//SOLUTION:

//https://leetcode.com/problems/reverse-integer/description/


/*class Solution {
public:
    int reverse(int x) {
        int temp = 0;
        long long num = 0;
        
        while (x != 0) {
            temp = x % 10;
            num = num * 10 + temp;
            x /= 10;
        }
        
        if (num < INT_MIN || num > INT_MAX) {
            return 0;
        }
        
        return static_cast<int>(num);
    }
};*/
