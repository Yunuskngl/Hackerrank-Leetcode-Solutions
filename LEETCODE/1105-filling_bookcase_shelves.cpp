//SOLUTION:

//https://leetcode.com/problems/filling-bookcase-shelves/

/*
class Solution {
public:
    int minHeightShelves(vector<vector<int>>& books, int shelfWidth) {
        int kitap = books.size();
        vector<int> dp(kitap + 1, 0);
        dp[0] = 0;
        for (int i = 1; i <= kitap; ++i) {
            int width = 0;
            int height = 0;
            dp[i] = INT_MAX;
            for (int j = i - 1; j >= 0; --j) {
                width += books[j][0];
                if (width > shelfWidth) {
                    break;
                }
                height = max(height, books[j][1]);
                dp[i] = min(dp[i], dp[j] + height);
            }
        }
        return dp[kitap];
    }

};*/