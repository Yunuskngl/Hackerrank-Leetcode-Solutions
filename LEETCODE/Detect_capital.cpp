//SOLUTION:

//https://leetcode.com/problems/detect-capital/

/*#include <cctype> 
#include <string>
using namespace std;
class Solution {
public:
    bool detectCapitalUse(string word) {
        string temp1 = word;
        string temp2 = word;
        string temp3 = word;
        
       
        for (char& c : temp1) {
            c = toupper(c);
        }
        for (char& c : temp2) {
            c = tolower(c);
        }
        temp3[0] = toupper(temp3[0]);
        for (int i = 1; i < temp3.size(); ++i) {
            temp3[i] = tolower(temp3[i]);
        }
        
        if(word == temp1 || word == temp2 || word == temp3){
            return true;
        }
        return false;
    }*/
