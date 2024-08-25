#include <iostream>
using namespace std;
//overloading

int topla(int a, int b){
    return a+b;
}

int topla(int a, int b,int c){
    return a+b+c;
}

double topla(double a, double b){
    return a+b;
}

float topla(float a, float b){
    return a*b;
}

int main(){
    cout << topla(5,6) << endl;
    cout << topla(5,6,7)<<endl;
    cout << topla(5.5,6.7)<<endl;
    cout << topla(5.5,6.7)<<endl;
    return 0;
}