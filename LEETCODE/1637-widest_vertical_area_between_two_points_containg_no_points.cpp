//SOLUTION:

//https://leetcode.com/problems/widest-vertical-area-between-two-points-containing-no-points/description/

/*class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int n = points.size();
        sort(points.begin(), points.end());
        int maxv = 0;
        for(int i=1;i<n;i++) {
            int a = points[i][0]-points[i-1][0];
            maxv = max(maxv, a);
        }

        return maxv;
        
    }
};*/