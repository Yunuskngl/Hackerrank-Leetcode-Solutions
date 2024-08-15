//SOLUTION:

//https://leetcode.com/problems/letter-combinations-of-a-phone-number/

/*class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};
        vector<string> res;
        vector<string> temp;
        res.push_back("");
        string letters[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        for(int i = 0; i < digits.size(); i++){
            int num = digits[i] - '0';
            if(num < 0 || num > 9) break;
            string letter = letters[num];
            if(letter.empty()) continue;
            temp.clear();
            for(int j = 0; j < letter.size(); j++){
                for(int k = 0; k < res.size(); k++){
                    temp.push_back(res[k] + letter[j]);
                }
            }
            res.swap(temp);
        }
        return res;

    }
};*/