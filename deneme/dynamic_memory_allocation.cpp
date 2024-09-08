#include <iostream>
using namespace std;

int main(){
    int *ptr = new int; //4 byte'lık yer ayırdı. 
    *ptr = 20;
    cout << "değer : " << *ptr<<endl;
    delete ptr;
    cout << "değer : " << *ptr<<endl;

    //--------------------------------------

    int *arr = new int[5]; //5 elemanlı arrry için yer ayırma .
    for(int i = 0 ; i< 5; i++){
        arr[i] = i*10;
    }
    for(int i = 0 ; i< 5; i++){
        cout << arr[i] << " ";
    }

    delete[] arr;
  
    return 0;

}


