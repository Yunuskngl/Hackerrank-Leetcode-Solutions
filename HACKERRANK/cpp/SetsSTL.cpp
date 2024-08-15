#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

//https://www.hackerrank.com/challenges/cpp-sets/problem?isFullScreen=true

int main() {
    int size;
    cin>>size;
    set <int> v;
    for(auto i=0;i<size;i++){
        int n,a;
        cin>>n>>a;
        if(n==1){
            v.insert(a);
        }
        else if(n==2){
            v.erase(a);
        }
        else if(n==3){
            set<int>::iterator
            itr = v.find(a);
            if(itr == v.end()) cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
        }
    } 
    return 0;
}