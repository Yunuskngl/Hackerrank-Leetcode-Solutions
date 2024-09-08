// dosya okuma (ifstream)

#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ifstream dosyaoku("ornek.txt");

    string satir;

    if(dosyaoku.is_open()){
        while(getline(dosyaoku,satir)){
            cout << satir << endl;
        }
        dosyaoku.close();
    }
    else{
        cout << "dosya açılmadı" << endl;
    }

    return 0;
}