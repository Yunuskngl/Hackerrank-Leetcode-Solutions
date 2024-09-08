#include <iostream>
using namespace std;

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x = 45;
    int y = 123123;
    cout << "değiştirmeden önce değerler : " << x << " " << y << endl;
    swap(&x,&y);

    cout << "değiştirmeden sonra değerler : " << x << " " << y << endl; 
}