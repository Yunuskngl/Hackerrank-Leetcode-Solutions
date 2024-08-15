//SOLUTION:

//https://leetcode.com/problems/find-the-pivot-integer/

/*
class Solution {
public:
    int pivotInteger(int n) {
        if(n == 0) return 0;
        if(n==1) return 1;
        int sum  = n*(n+1)/2;
        int sum2 = 0;
        int sum3 = 0;
        for(int i=0; i<n; i++) {
            sum2 += i;
            sum3 += i+1;
            if(sum2 == sum-sum3) {
                return i+1;
            }
        }
        return -1;

        
    }
};*/