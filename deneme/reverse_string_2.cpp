#include <iostream>
#include <string>
#include <algorithm> //
using namespace std;

int main(){
    string str  = "pointerlar";
    cout << "orijinal: "<< str << endl;

    reverse(str.begin(),str.end());
    cout << "ters yazılmış hali : "<< str << endl;
    

}