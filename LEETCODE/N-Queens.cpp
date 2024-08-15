//SOLUTION:

//https://leetcode.com/problems/n-queens-ii/description/

/*
class Solution {
public:
    bool isSafe(vector<int>& board, int row, int col){
        for(int i = 0; i < row; i++){
            if(board[i] == col || abs(i - row) == abs(board[i] - col)){
                return false;
            }
        }
        return true;
    }

    int totalNQueens(int n) {
        vector<int> board(n, -1);
        int count = 0;
        solveNQueens(board, 0, count);
        return count;

    }
    void solveNQueens(vector<int>& board, int row, int& count){
        if(row == board.size()){
            count++;
            return;
        }
        for(int col = 0; col < board.size(); col++){
            if(isSafe(board, row, col)){
                board[row] = col;
                solveNQueens(board, row + 1, count);
                board[row] = -1;
            }
        }
    }


};*/