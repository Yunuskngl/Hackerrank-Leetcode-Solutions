//SOLUTION:

//https://leetcode.com/problems/cherry-pickup-ii/description/?envType=daily-question&envId=2024-02-11


/*class Solution {
public:
        int row,col;
        int dy[70][70][70];
        int solve(int x,int w1 ,int w2, vector<vector<int>>&grid){
            if(w1<0 || w1>=col || w2<0 || w2>=col || x>=row){
                return 0;
            } 
            if(dy[x][w1][w2] != -1){
                return dy[x][w1][w2];  
            }
            int ans = 0;
            if(w1==w2) ans = grid[x][w1];
            else ans=grid[x][w1] + grid[x][w2];

            int a = solve(x+1, w1-1, w2-1, grid);
            int b = solve(x+1, w1-1, w2, grid);
            int c = solve(x+1, w1-1, w2+1, grid);
            int d = solve(x+1, w1, w2-1, grid);
            int e = solve(x+1, w1, w2, grid);
            int f = solve(x+1, w1, w2+1, grid);
            int g = solve(x+1, w1+1, w2-1, grid);
            int h = solve(x+1, w1+1, w2, grid);
            int i = solve(x+1, w1+1, w2+1, grid);

            ans += max(i,max(max(max(a,b),max(c,d)),max(max(e,f),max(g,h))));
            return dy[x][w1][w2] = ans;
        }
        int cherryPickup(vector<vector<int>>& grid) {
            row = grid.size(),col = grid[0].size();
            memset(dy,-1,sizeof(dy));
            return solve(0,0,col-1,grid);

        }
};*/

