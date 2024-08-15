//SOLUTION:

//https://leetcode.com/problems/max-chunks-to-make-sorted/

/*
class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int max_element = 0;
        int a = 0;

        for (int i = 0; i < arr.size(); i++) {
            max_element = max(max_element, arr[i]);
            if (max_element == i) {
                a++;
            }
        }

        return a;
    }
};
*/