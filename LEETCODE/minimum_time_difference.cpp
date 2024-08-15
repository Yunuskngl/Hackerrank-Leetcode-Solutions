class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> time;
        for (int i = 0; i < timePoints.size(); i++) {
            int h = stoi(timePoints[i].substr(0, 2)); //stoi stringi integera çevirir.
            int m = stoi(timePoints[i].substr(3, 2));  //substr stringin belirli bir kısmını alır.
            time.push_back(h * 60 + m); //saati dakikaya çevirir.
        }
        sort(time.begin(), time.end());
        int minDiff = INT_MAX; //neden INT_MAX kullanıldı? çünkü INT_MAX en büyük integer değeridir ve bu değerden daha büyük bir değer olamaz.
        for (int i = 1; i < time.size(); i++) {
            minDiff = min(minDiff, time[i] - time[i - 1]);
        }
        minDiff = min(minDiff, 1440 - time.back() + time[0]);  //neden? çünkü 24 saat 1440 dakikadır.1440 - 
        return minDiff;

    }
};