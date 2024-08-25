#include <iostream>
#include <string>

using namespace std;

//parametresiz bir fonksiyon:
void helloworld(){
    cout << "merhaba , dünya " << endl;
}


//parametre alan ve geri dönüşlü olmayan fonksiyon
void printmessage(string mesaj){
    cout << "mesaj : " << mesaj << endl;
}

//iki parametre alan ve toplamlarını geri döndüren fonksiyon.,
float add(float a , float b){
    return a+b;
}

//referans parametre kullanan bir fonksiyon tanımı
void increment(int &value){
    value++;
}

//default parametre kullanan bir fonksiyon tanımı
void selamlama(string name = "ziyaretçi"){
    cout << "merhaba , " << name << "!" << endl;
}

int main(){
    int val = 5;
    increment(val);
    increment(val);increment(val);increment(val);
    increment(val);
    cout << val <<endl;

    selamlama();
    return 0;
}