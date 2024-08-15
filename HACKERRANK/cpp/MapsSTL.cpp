#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

//https://www.hackerrank.com/challenges/cpp-maps/problem?isFullScreen=true

int main() {
    map<string,int>students = {
        
    };
    int n;
    cin>>n;
    int a,c;
    string b;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a==1){
            cin>>b>>c;
            if(b == "Jesse") students["Jesse"] += c;
            else{
                students["Jess"] += c;
            }
        }
        else if(a==2){
            cin>>b;
            if(b == "Jesse") students["Jesse"] = 0;
            else{
                students["Jess"] = 0;
            }
        }
        else{
            cin>>b;
            auto f = students.find(b);
            if (f != students.end()) {
            cout << f->second << endl;
}
        }
    }
       
    return 0;
}