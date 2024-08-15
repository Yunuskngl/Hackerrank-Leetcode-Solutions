//SOLUTION:

//https://leetcode.com/problems/search-a-2d-matrix-ii/

/*
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = 0;
        for (i = 0; i < matrix.size(); i++) {
            int n = matrix[i].size() / 2;
            if (matrix[i][n] == target) {
                return true;
            } else if (matrix[i][n] < target) {
                for (int k = n; k < matrix[i].size(); k++) {
                    if (matrix[i][k] == target) {
                        return true;
                    }
                }
            } else {
                for (int j = 0; j < n; j++) {
                    if (matrix[i][j] == target) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
*/