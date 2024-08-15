//SOLUTION:

//https://leetcode.com/problems/sort-colors/

/*
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0, j = 0, k = 0;
        for (int m = 0; m < nums.size(); m++) {
            if (nums[m] == 0) i++;
            else if (nums[m] == 1) j++;
            else k++;
        }

        for (int x = 0; x < i; x++) {
            nums[x] = 0;
        }
        for (int x = i; x < i + j; x++) {
            nums[x] = 1;
        }
        for (int x = i + j; x < i + j + k; x++) {
            nums[x] = 2;
        }
    }
};

*/

/*
class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(),nums.end());
    }
};
*/