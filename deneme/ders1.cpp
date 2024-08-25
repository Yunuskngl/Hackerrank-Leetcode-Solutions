#include <iostream>
using namespace std;

int main(){
    
    int a = 1;
    float b  = 3.14;
    char c = 'a';
    bool d = true;
    string cumle = "hello world";

    cout << a << "\n" << d << endl;
    cout << b << endl;
    cout << c << endl;
    cout << "merhaba"<< endl;
    cout << cumle;
    

    if(a>3){
        cout << "a is greater than 3 "<< endl;
    }
    else if(a ==3) {
        cout << "a is equal 3 "<<endl;
    }
    else{
        cout<< "a <3 ";
    }

    for(int i=0;i<5 ; i++){
        cout << i << endl;
    }

    int j=05;
    while(j<5){
        cout << j << endl;
    
    }

    do{
        cout << "bak zeynep"<< endl;
        //işlemleri yazıyon
    }while(j<5);


  
    long long  temp;
    cout << "lütfen bir sayı giriniz:"<< endl;
    cin >> temp;

    cout << temp;

    // -2147483647 < int < 2147483647






    




    return 0;


}
