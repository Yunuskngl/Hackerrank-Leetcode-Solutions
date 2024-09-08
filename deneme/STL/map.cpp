#include <iostream>
#include <map>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main(){
    map<int, string>m1;
    m1[1] = "abc";
    m1[2] = "def";
    m1[3] = "ghi";
    m1.insert({4,"jkl"});

    for(auto& k : m1){  // 'auto&' referans olarak alır
    cout << k.first << " : " << k.second << endl;
}
cout << endl;


}