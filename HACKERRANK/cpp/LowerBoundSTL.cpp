#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//https://www.hackerrank.com/challenges/cpp-lower-bound/problem?isFullScreen=true

int main() {
    int n,q,a;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    cin>>q;
    for(int j=0;j<q;j++){
        cin>>a;
        auto it = lower_bound(v.begin(),v.end(),a);
        auto index = it - v.begin();
        if(a == *it){
            cout<<"Yes"<<" "<<index + 1 << endl;
        }
        else{ 
            cout<<"No" << " " <<  index +1 << endl;
        }
    }
    return 0;
}
