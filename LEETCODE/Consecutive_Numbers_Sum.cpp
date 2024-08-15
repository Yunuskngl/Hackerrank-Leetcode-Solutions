//SOLUTION:

//https://leetcode.com/problems/consecutive-numbers-sum/

/*
class Solution {
public:
    int consecutiveNumbersSum(int n) {
        int counter = 1;
        for( int i = 2; i < sqrt( 2 * n ); i++ ) {
            
            if ( ( n - ( i * ( i - 1 )/2) ) % i == 0) counter++;
        }
        return counter;
    }
};
*/