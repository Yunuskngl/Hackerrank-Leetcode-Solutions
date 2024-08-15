#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//https://www.hackerrank.com/challenges/arrays-introduction/problem?isFullScreen=true


int main() {
    int n ;
    cin >> n ;
    vector < int > v1(n);
    for(int i=0 ; i < n  ; i++) cin >> v1[i];
    
    for(int i=n-1 ; i >= 0 ; i--) cout << v1[i] << " ";
  
    return 0;
}