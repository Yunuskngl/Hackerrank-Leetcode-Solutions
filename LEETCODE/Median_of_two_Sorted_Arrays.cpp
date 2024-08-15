//SOLUTION:

//https://leetcode.com/problems/median-of-two-sorted-arrays/

/*class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size1 = nums1.size();
        int size2 = nums2.size();
        vector<int> nums3(size1 + size2);
        
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), nums3.begin());

        int totalSize = size1 + size2;
        if (totalSize % 2 == 0) {
            int mid1 = nums3[(totalSize - 1) / 2];
            int mid2 = nums3[totalSize / 2];
            return (mid1 + mid2) / 2.0;
        } else {
            return nums3[totalSize / 2];
        }
    }
};*/