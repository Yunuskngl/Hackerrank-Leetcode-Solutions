//SOLUTION:

//https://leetcode.com/problems/unique-paths/

/*
class Solution {
public:
    vector<vector<int>>dp;
    int f(int row,int col){
        if(dp[row][col]!=0)return dp[row][col];
        if(row==0 || col==0)return dp[row][col]=1;
        return dp[row][col] = f(row-1,col)+f(row,col-1);
    }
    int uniquePaths(int row, int col) {
        dp.assign(row+1,vector(col+1,0));
        return f(row-1,col-1);
    }
};a
*/