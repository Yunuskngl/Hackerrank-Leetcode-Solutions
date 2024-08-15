#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//https://www.hackerrank.com/challenges/vector-erase/problem?isFullScreen=true

int main() {
    int n,a,b,c;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>c;
    v.erase(v.begin()+c-1);
    cin>>a>>b;
    v.erase(v.begin()+a-1,v.begin()+b-1);
    cout<<v.size()<<endl;
    for(int j=0;j<v.size();j++){
        cout<<v[j]<<" ";
    }
    return 0;
}
