#include <iostream>
using namespace std;


void increment(int *ptr){
    (*ptr)++;
}



int main(){
    int arr[3] = {10 , 20 ,30};
    int *ptr = arr ; //pointer'ı arrayin ilk elemanının adresine eşitledim.
    
    //pointer ile dizi elemanlarına erişim.
    for(int i = 0 ; i< 3 ; i++){
        cout << (ptr+i)<< " ";
    }
    cout << endl;
    for(int i = 0 ; i< 3 ; i++){
        cout << *(ptr+i)<< " ";
    }
    cout << endl;
    cout << *ptr << endl;
    ptr++;
    cout << *ptr << endl;
    ptr--;
    cout << *ptr << endl;

    int *zeynep = nullptr;

    int a = 5;
    zeynep = &a;
    cout << *zeynep<< endl;;


    //void pointer 
    void *ptr2; // herhangi bir veri türüne eşitleyebiliriz.
    int x = 10;
    ptr2 = &x;
    cout << "değeri:" << *(int *)ptr2 << endl;


    increment(&x);
    cout << x; 
    

}