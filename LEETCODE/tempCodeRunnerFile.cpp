class Solution {
public:
    int countHomogenous(string s) {
        int n = s.size();
        int count = 1;
        int result = 0;
        for (int i = 1; i < n; i++) {
            if (s[i] == s[i - 1]) count++;
            else {
                result += (count * (count + 1)) / 2;
                count = 1;
            }
        }
        result += (count * (count + 1)) / 2;
        return result;
    }
    
};