//SOLUTION:

//https://leetcode.com/problems/number-of-employees-who-met-the-target/

/*class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int n = hours.size();
        sort(hours.begin(),hours.end());
        int j = 0;
        for(int i=0;i<n;i++){
            if(hours[i] >= target){
                j++;
            }
            
        }
        return j;
      
    }
};*/