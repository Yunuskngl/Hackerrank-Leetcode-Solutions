#include <iostream>
#include <fstream>
using namespace std;

int main(){
    fstream dosya;

    dosya.open("ornek2.txt" , ios::in | ios::out | ios::app);
    
    if(dosya.is_open()){
        dosya << "bu bir fstream örneğidir." << endl;
        dosya.seekg(0); //dosya başına geri dönüyoruz.

        string satir;
        while(getline(dosya,satir)){
            cout << satir << endl;
        }
        dosya.close();
    }
    else{
        cout << "dosya açılamadı" << endl;
    }
}