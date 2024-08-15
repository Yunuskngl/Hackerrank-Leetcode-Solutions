//SOLUTION :

//https://leetcode.com/problems/next-permutation/description/

/*
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(), nums.end());
    }
};*/

/*
*/
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int size = nums.size();
        vector<int>temp;
        if(size > 1){
            int i = size - 1;
            while(i > 0 && nums[i] <= nums[i - 1]){
                temp.push_back(nums[i]);
                i--;
            }
            if(i == 0){
                sort(nums.begin(), nums.end());
            }else{
                int j = 0;
                while(nums[i - 1] >= temp[j]){
                    j++;
                }
                nums[i - 1] = temp[j];
                temp[j] = nums[i - 1];
                sort(temp.begin(), temp.end());
                for(int k = 0; k < temp.size(); k++){
                    nums[i + k] = temp[k];
                }
            }
        }
    }
};

