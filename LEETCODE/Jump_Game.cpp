/*SOLUTION:

https://leetcode.com/problems/jump-game-ii/

class Solution {
public:
    int jump(vector<int>& nums) {
        int jump_h = nums[0];
        int size = nums.size();
        int j = 0;
        if(size==1) return 0;
        

        else{
            int i = 0;
            while(i<size){
                int max = 0;
                int index = 0;
                for(int k = 1; k<=jump_h; k++){
                    if(i+k>=size) return j+1;
                    if(nums[i+k]+k>max){
                        max = nums[i+k]+k;
                        index = i+k;
                    }
                }
                i = index;
                jump_h = nums[i];
                j++;
            }
            return j;
        }
    }
};





*/