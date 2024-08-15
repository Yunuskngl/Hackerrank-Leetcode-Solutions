//SOLUTION:

//https://leetcode.com/problems/container-with-most-water/

/*class Solution {
public:
    int maxArea(vector<int>& height) {
        int Water = 0;
        int l = 0;
        int r = height.size() - 1;
        while (l < r) {
            int h = min(height[l], height[r]);
            int w = r - l;
            int area = h * w;
            Water = max(Water, area);
            if (height[l] < height[r]) {
                l++;
            } else {
                r--;
            }
        }
        return Water;
    }
};*/