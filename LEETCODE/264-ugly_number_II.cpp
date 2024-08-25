//SOLUTION:

//https://leetcode.com/problems/ugly-number-ii/description/?envType=production

/*
class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> m(n, 0);
        m[0] = 1;
        int i2 = 0, i3 = 0, i5 = 0;
        for (int i = 1; i < n; i++) {
            m[i] = min(m[i2] * 2, min(m[i3] * 3, m[i5] * 5));
            if (m[i] == m[i2] * 2) i2++;
            if (m[i] == m[i3] * 3) i3++;
            if (m[i] == m[i5] * 5) i5++;
        }
        return m[n - 1];

};

*/
