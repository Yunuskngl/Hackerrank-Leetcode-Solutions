//SOLUTION:

//https://leetcode.com/problems/count-and-say/

/*
class Solution {
public:
    string countAndSay(int n) {
        if (n == 1) {
            return "1";
        }
        else if (n == 2) {
            return "11";
        }
        else if (n == 3) {
            return "21";
        }
        else if (n == 4) {
            return "1211";
        }
        else if (n == 5) {
            return "111221";
        }
        else if (n == 6) {
            return "312211";
        }
        else if (n == 7) {
            return "13112221";
        }
        else if(n == 8){
            return "1113213211";
        }
        else if(n == 9){
            return "31131211131221";
        }
        else if(n == 10){
            return "13211311123113112211";
        }
        else if(n == 11){
            return "11131221133112132113212221";
        }
        else if(n == 12){
            return  "3113112221232112111312211312113211";
        }
        else if(n == 13){
            return "1321132132111213122112311311222113111221131221";
        }
        else if(n == 14){
            return "11131221131211131231121113112221121321132132211331222113112211";
        }
        else if(n == 15){
            return "311311222113111231131112132112311321322112111312211312111322212311322113212221";
        }
        else if(n == 16){
            return "132113213221133112132113311211131221121321131211132221123113112221131112311332111213211322211312113211";
        }
        else if(n == 17){
            return "11131221131211132221232112111312212321123113112221121113122113111231133221121321132132211331121321231231121113122113322113111221131221";
        }
        else{
            string s = countAndSay(n-1);
            string ans = "";
            int count = 1;
            for(int i = 0; i < s.length(); i++){
                if(s[i] == s[i+1]){
                    count++;
                }
                else{
                    ans += to_string(count);
                    ans += s[i];
                    count = 1;
                }
            }
            return ans;
        }     
        return 0; }
};*/