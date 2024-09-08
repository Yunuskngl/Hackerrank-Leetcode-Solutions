#include <iostream>
using namespace std;

int main(){
    string girdi;
    girdi = "merhaba";
    string str2 = "zeynep";
    girdi.swap(str2);
    cout << str2 << endl;
    cout << girdi;
}