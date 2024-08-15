//SOLUTION:

//https://leetcode.com/problems/minimum-common-value/description/

/*class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int a=nums1.size(),b=nums2.size() ,i=0,j=0, ans=-1;
        while(i<a && j<b)
        {
            if(nums1[i]>nums2[j])
                j++;
            else if(nums2[j]>nums1[i])
                i++;
            else
            {
                ans=nums1[i];
                break;
            }
        }
        return ans;
        
    }
};*/
        