//SOLUTION:

//https://leetcode.com/problems/maximum-number-of-points-with-cost/description/?envType=daily-question&envId=2024-08-17

/*class Solution {
public:
    long long maxPoints(vector<vector<int>>& points) {
        int size1 = points.size();
        int size2 = points[0].size();
        vector<long long> m(size2, 0);
        for (int i = 0; i < size2; i++) m[i] = points[0][i];  
        for (int i = 1; i < size1; i++) {
            vector<long long> left(size2, 0);
            vector<long long> right(size2, 0);
            l[0] = m[0];
            r[size2 - 1] = m[size2 - 1];
            for (int j = 1; j < size2; j++)  l[j] = max(l[j - 1] - 1, m[j]);
            for (int j = size2 - 2; j >= 0; j--) r[j] = max(r[j + 1] - 1, m[j]);
            for (int j = 0; j < size2; j++) m[j] = points[i][j] + max(l[j], r[j]);
        

        }
        long long res = 0;
        for (int i = 0; i < size2; i++) res = max(res, m[i]);
        return res;

    }
};
*/