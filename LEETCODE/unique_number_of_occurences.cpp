//SOLUTION:

//https://leetcode.com/problems/unique-number-of-occurrences/

/*
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        unordered_map<int,int>::iterator a = mp.begin();
        unordered_map<int,int>::iterator b = mp.begin();

        while(a != mp.end()){
            b = a;
            b++;
            while(b != mp.end()){
                if(a->second == b->second) return false;
                b++;
            }
            a++;
            
        }
        return true;
    }
};
*/