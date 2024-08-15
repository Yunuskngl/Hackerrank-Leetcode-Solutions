//SOLUTION:

//https://leetcode.com/problems/candy/

/*
class Solution {
public:
    int candy(vector<int>& ratings) {
        int candy = ratings.size();
        int i =0,j=1,n=0;
        while(j<ratings.size()){
            if(ratings[j]>ratings[j-1]){
                n++;
                candy+=n;
                i=0;
            }
            else if(ratings[j]==ratings[j-1]){
                n=0;
                i=0;
            }
            else{
                i++;
                if(i==n){
                    n++;
                }
                candy+=i;
            }
            j++;
        }
        return candy;
        
    }
};
*/