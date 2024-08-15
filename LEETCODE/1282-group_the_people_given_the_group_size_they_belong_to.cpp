//SOLUTION:

//https://leetcode.com/problems/group-the-people-given-the-group-size-they-belong-to/

/*class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> answer;
        int n = groupSizes.size();
        unordered_map<int,vector<int>> mp;
        for(int i = 0; i < n; i++) mp[groupSizes[i]].push_back(i);

        for(auto iter : mp) {
            vector<int> v;
            int size = iter.first;
            vector<int> tmp = iter.second;
            int n = tmp.size()/size;
            int index = 0;
            for(int i = 0; i < n; i++) {
                vector<int> v;
                for(int j = 0; j < size; j++) {
                    v.push_back(tmp[index]);
                    index++;
                }
                answer.push_back(v);
            }
        }
        return answer;
    }
};*/