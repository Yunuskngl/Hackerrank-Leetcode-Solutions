#include <iostream>
using namespace std;

void reverseArray(int *arr, int size){
    int *start = arr;
    int *end = arr + size -1 ;
    while(start < end){
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}


int main(){
    int arr[5] = {1,2,3,4,5};
    cout << "orijinal dizi: "<< endl;
    for(int i = 0 ; i<5; i++){
        cout << arr[i] <<  " ";
    }
    cout << endl;

    reverseArray(arr,5);
    for(int i = 0 ; i<5; i++){
        cout << arr[i] <<  " ";
    }
    cout << endl;
    return 0;
}