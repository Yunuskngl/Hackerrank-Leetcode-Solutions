#include <iostream>
using namespace std;
int main(){
    int value = 5;
    int *ptr = &value;
    int **ptrtoptr = &ptr;
    
    cout << value << endl;
    cout << *ptr << endl;
    cout << **ptrtoptr<<endl;

    cout<< endl;
    //ADRES DEĞERLERİ:
    cout << &value << endl;
    cout << ptr << endl;
    cout << *ptrtoptr<<endl;

    cout<< endl;
    //ADRES DEĞERLERİ:
    cout << &value << endl;
    cout << ptr << endl;
    cout << *ptrtoptr<<endl;

    return 0;
}