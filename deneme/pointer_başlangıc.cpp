#include <iostream>
using namespace std;

int main(){
    //tanımlanması
    int sayi = 10;
    int *ptr = &sayi;
    ptr++;
    cout << ptr << endl;
    cout << *ptr << endl;

    //türleri
    int *ptr_int;
    float *ptr2;
    char *ptr3;


    //pointer ve değerlerine erişim
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << sayi << endl;

    *ptr = 20; //sayi değerini değiştirmeden sadece pointer'ı değiştiriyorum
    sayi  = 30;
    cout << "sayının yeni değeri : " << sayi << endl;
    cout << *ptr << endl;
    cout << ptr << endl;



    return 0;   
}