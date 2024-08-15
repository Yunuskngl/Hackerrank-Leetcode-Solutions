#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//https://www.hackerrank.com/challenges/variable-sized-arrays/problem?isFullScreen=true

int main() {
   int a, b, k;
    cin >> a >> b;
    vector<vector<int>> v(a);
    for (int i = 0; i < a; i++){
        cin >> k;
        v[i].resize(k); 
        for (int j = 0; j < k; j++){
            cin >> v[i][j];
        }
    }
    int index,index1;
    
    for(int m=0;m<a;m++){
        cin >> index >> index1;
        cout << v[index][index1]<<endl;
    }
    
    return 0;
}
