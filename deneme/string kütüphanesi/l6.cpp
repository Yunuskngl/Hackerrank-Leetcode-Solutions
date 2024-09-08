#include <iostream>
using namespace std;

int main(){
    string girdi;
    girdi = "merhaba dünya";
    size_t pos  =  girdi.find("dünya");
    if(pos != string::npos){
        cout << "programlama ifadesi "<< pos << ". indekste bulundu" << endl;
    }
    else {
        cout << "alt string bulunamadı "<< endl;
    }
    return 0;
   
}