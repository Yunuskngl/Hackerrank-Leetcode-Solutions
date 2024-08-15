#include <iostream>
#include <string>
using namespace std;

//https://www.hackerrank.com/challenges/c-tutorial-strings/problem?isFullScreen=true

int main() {
    string first,second,s;
    char temp;
    cin >> first >> second;
    s = first+second;
    temp = first[0];
    first[0] = second[0] ;
    second[0] = temp;
    
    cout << first.size() << " " << second.size()<<endl;
    cout << s << endl ;
    cout << first << " " << second;
    
    return 0;
}
