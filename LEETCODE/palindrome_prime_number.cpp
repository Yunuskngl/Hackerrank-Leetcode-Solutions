//SOLUTION :

//https://leetcode.com/problems/palindrome-number/

/*
class Solution {
    bool isPrime(int n){
        if(n%2 == 0) return false;
        for(int i=3;i<=sqrt(n);i+=2){
            if(n%i == 0) return false;
        }
        return true;
    }
public:
    int primePalindrome(int n) {
        if(n <= 2) return 2;
        if(n >= 8  && n <= 11)
            return 11 ;
        
        for(int i=1;i<100000;i++){
            string s = to_string(i);
            string s1 = s;
            reverse(s1.begin(),s1.end());
            s += s1.substr(1);
            int x = stoi(s);
            if(x>=n && isPrime(x)) return x;
        }
        return 0;

        

    }
    
    
};
*/