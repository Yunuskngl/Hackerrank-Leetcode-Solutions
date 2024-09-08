#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector <int> arr = {5,14,22,37,45,54,67,71,83,92};
    int targetvalue = 92;

    auto it = lower_bound(arr.begin(),arr.end(),targetvalue);
    cout << targetvalue << "lower bound is " << *it <<  "and distance" << it - arr.begin() <<endl;
    it = upper_bound(arr.begin(),arr.end(),targetvalue);
    cout<< targetvalue <<" upper bound is "<< *it <<" and distance is "<< it - arr.begin() <<endl;
    return 0;
}