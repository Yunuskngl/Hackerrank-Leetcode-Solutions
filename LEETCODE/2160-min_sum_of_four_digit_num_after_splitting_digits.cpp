//SOLUTION:

//https://leetcode.com/problems/minimum-sum-of-the-four-digits-after-rearranging/discuss/1510983/C%2B%2B-Simple-Solution

/*class Solution {
public:
    int minimumSum(int num) {
        int temp = num;
        vector<int>vec;
        while(temp>0){
            int basamak = temp%10;
            vec.push_back(basamak);
            temp/=10;

        }
        sort(vec.begin(),vec.end());
        return ((vec[0]*10 + vec[2]) + (vec[1]*10 + vec[3]));
    }
};*/