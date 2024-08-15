//SOLUTION:

//https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone/discuss/1510983/C%2B%2B-Simple-Solution

/*class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        int ans = 0;
        for(int i = 0; i < seats.size(); i++) {
            ans += abs(seats[i] - students[i]);
        }
        return ans;
    }
};*/