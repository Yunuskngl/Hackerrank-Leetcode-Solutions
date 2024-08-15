class Solution {
public:
    int pivotInteger(int n) {
        int sum,sum2=0;
        int i=1;
        int j=0;
        while(i<=n){
            sum+=i;
            i++;
        }
        while(j<n){
            sum2+=j;
            j++;
        }
        if(sum2==sum-sum2){
            return j;
        }
        else{
            return -1;
        }
    }
};