#include <iostream>
#include <string>

using namespace std;

int main(){
    string str = "hello world merhaba zeynep";
    cout << str << endl;

    string isim;
    string yas;
    string bolum;

    cout << "lütfen bilgileri sırasıyla giriniz isim, yas, bölüm"<<endl;
    cin >> isim >> yas>> bolum ;
    cout << isim << yas << bolum;
}
