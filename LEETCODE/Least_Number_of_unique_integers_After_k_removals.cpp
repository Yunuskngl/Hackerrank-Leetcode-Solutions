//SOLUTION:

//https://leetcode.com/problems/least-number-of-unique-integers-after-k-removals/description/?envType=daily-question&envId=2024-02-16

/*
class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> m;
        for (int i : arr) m[i]++;
        vector<int> v;
        for (auto& p : m) v.push_back(p.second);
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++) {
            if (k >= v[i]) {
                k -= v[i];
                v[i] = 0;
            } else {
                v[i] -= k;
                k = 0;
                break;
            }
        }
        int res = 0;
        for (int i : v) if (i > 0) res++;
        return res;
    }
};
*/