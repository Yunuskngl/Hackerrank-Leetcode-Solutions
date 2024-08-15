//SOLUTION:

//https://leetcode.com/problems/valid-sudoku/

/*
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        int arr[9] = {0};
        int arr2[9] = {0};
        int arr3[9] = {0};
        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<m ; j++){
                if(board[i][j] != '.'){
                    int num = board[i][j] - '0';
                    if(arr[num-1] == 1){
                        return false;
                    }
                    arr[num-1] = 1;
                }
                if(board[j][i] != '.'){
                    int num = board[j][i] - '0';
                    if(arr2[num-1] == 1){
                        return false;
                    }
                    arr2[num-1] = 1;
                }
            }
            memset(arr, 0, sizeof(arr));
            memset(arr2, 0, sizeof(arr2));
        }
        for(int i = 0 ; i<n ; i+=3){
            for(int j = 0 ; j<m ; j+=3){
                for(int k = i ; k<i+3 ; k++){
                    for(int l = j ; l<j+3 ; l++){
                        if(board[k][l] != '.'){
                            int num = board[k][l] - '0';
                            if(arr3[num-1] == 1){
                                return false;
                            }
                            arr3[num-1] = 1;
                        }
                    }
                }
                memset(arr3, 0, sizeof(arr3));
            }
        }
        return true;

    }
};*/