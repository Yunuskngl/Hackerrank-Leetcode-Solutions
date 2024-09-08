#include <iostream>
#include <set>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main(){
    set <int> s1;
    cout << "empty : "<< s1.empty()<< endl;
    s1.insert(30);
    s1.insert(24);
    s1.insert(30);
    s1.insert(52);
    s1.insert(67);
    s1.insert(1);
    s1.insert(8124);
    cout << "empty : "<< s1.empty()<< endl;
    for(auto k : s1)
        cout << k << " ";
    cout << endl;
    cout << s1.size()<< endl;

    multiset <int> s2 = {1,2,2,2,3,3,3,4,4,4,5};
    for(int k : s2)
        cout << k << " ";
    cout << endl;
    
    unordered_set<int> s3 = {30,10,5,100,20};
    for(int k : s2)
        cout << k << " ";
    cout << endl;

}
