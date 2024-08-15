//SOLUTION:

//https://leetcode.com/problems/search-a-2d-matrix/description/

/*class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        for(int i=0;i<matrix.size() ; i++){
            int a  = matrix[i].size();
            for(int j=0 ; j<a ; j++){
                if(target == matrix[i][j]){
                    return true;
                }
            }
        }
        return false;
    }
};*/