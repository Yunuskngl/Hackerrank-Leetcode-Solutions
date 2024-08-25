#include <iostream>

using namespace std;

int main(){
    int a;
    cout << "bir sayı giriniz:"<< endl;
    cin >> a;

    switch(a){
        case 1:
            cout << "a 1 'e eşittir."<<endl;
            break;
        case 2:
            cout << "a 2 'e eşittir."<<endl;
            break;
        
        case 3:
            cout << "a 3 'e eşittir."<<endl;
            break;
        default:
            cout << " BAŞKA BİŞİ"<< endl;
            return 0;
    }
    cout << " merhaba "<< endl;
    
}