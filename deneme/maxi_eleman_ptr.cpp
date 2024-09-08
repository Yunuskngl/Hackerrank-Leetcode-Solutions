#include <iostream>
using namespace std;

int findMax(int *arr,int size){
    int max = *arr;
    for(int i = 1 ; i < size ; i++){
        if(*(arr+i) > max ) max = *(arr+i);
    }
    return max;
}


int main(){
    int arr[6] = {133,33,100,555,413,333};

    int max = findMax(arr,5);
    cout << "dizinin en büyük elemanı : " << max << endl;
    return 0;
}

