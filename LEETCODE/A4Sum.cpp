class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int a,b,c,d;
        set<vector<int>> arr;
        sort(nums.begin(),nums.end());
        for(a=0;a<nums.size()-3;a++){
            for(b=a+1;b<nums.size()-2;b++){
                for(c=b+1;c<nums.size()-1;c++){
                    for(d=c+1;d<nums.size();d++){
                        if(nums[a] + nums[b] + nums[c] + nums[d] == target){
                            vector<int> temp = {nums[a],nums[b],nums[c],nums[d]};
                            sort(temp.begin(),temp.end());
                            arr.insert(temp);
                        }
                    }
                }
            }
        }
        vector<vector<int>> result(arr.begin(),arr.end());
        return result;
    }
};