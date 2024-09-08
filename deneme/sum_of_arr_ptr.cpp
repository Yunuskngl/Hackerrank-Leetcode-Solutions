#include <iostream>
using namespace std;

int sumArray(int *arr, int size){
    int sum = 0; 
    for(int i=0;i<size ;i++){
        sum+= *(arr+i);
    }
    return sum;
}
void array_olusturma(int arr[], int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

int main(){
    int n;
    cout<< "enter size : "<< endl;
    cin>>n;
    int arr[n];
    array_olusturma(arr,n);
    int sum = sumArray(arr,n);
    cout << sum << endl;

}