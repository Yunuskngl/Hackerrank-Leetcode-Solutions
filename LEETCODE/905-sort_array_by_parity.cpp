//SOLUTION:

//https://leetcode.com/problems/sort-array-by-parity/

/*class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> even;
        vector<int> odd;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }
        even.insert(even.end(),odd.begin(),odd.end());
        return even;
    }
};*/





class solution(object):
    def sortArrayByParity(self, nums):
        for i in range(len(nums)):
            if nums[i]%2==1:
                temp = nums[i]
                nums.remove(nums[i])
                nums.append(temp)

                

        return nums 