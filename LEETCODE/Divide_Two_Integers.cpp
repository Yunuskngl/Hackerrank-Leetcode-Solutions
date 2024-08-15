//SOLUTION:

//https://leetcode.com/problems/divide-two-integers/

/*
class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX; 
        }

        if (dividend == INT_MAX && divisor == 1) {
            return INT_MAX; 
        }

        if (dividend == INT_MAX && divisor == -1) {
            return INT_MIN+1;
        }

        if (dividend == INT_MIN && divisor == 1) {
            return INT_MIN; 
        }

        double a = static_cast<double>(dividend) / divisor;
        int b = static_cast<int>(a);
        return b;
    }
};*/