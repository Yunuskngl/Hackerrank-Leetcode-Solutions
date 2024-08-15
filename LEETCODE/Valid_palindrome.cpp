//SOLUTION:

//https://leetcode.com/problems/valid-palindrome/description/

/*
class Solution {
public:
    bool isPalindrome(string s) {
        string b;
        for (char c : s) {
            if (isalnum(c)) {    //İsalnum fonksiyonu ile harf ve rakamları alıyoruz.
                b += tolower(c);
            }
        }  
        
        int j = b.length() - 1;
        for (int i = 0; i < j; i++, j--) {
            if (b[i] != b[j]) {
                return false;
            }
        }
        
        return true; 
    }

};*/