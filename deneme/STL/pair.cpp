#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

int main(){
    pair <int,int> p1;
    p1.first = 1;
    p1.second = 2;
    
    cout << "pair 1 : " << p1.first << " " << p1.second << endl;
    pair<int,int> p2(3,4);
    cout << "pair 2 : " << p2.first << " " << p2.second << endl;
    pair<int,int> p3(5,6);
    cout << "pair 3 : " << p3.first << " " << p3.second << endl;


    p2.swap(p3);
    cout << " ----------------- \n";
    cout << "pair 2 : " << p2.first << " " << p2.second << endl;
    cout << "pair 3 : " << p3.first << " " << p3.second << endl;

}