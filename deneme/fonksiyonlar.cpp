#include <iostream>
using namespace std;

void printmesaj();
int add(int a , int b);
void merhabayunus();

int main(){
    int a= 5 ,b = 6;
    printmesaj();
    int sonuc = add(a,b);
    cout << (sonuc);
    return 0;
}

void merhabayunus(){
    cout <<("merhaba yunus");
}


//float ,double, char , long long , string ...
int add(int a , int b){
    cout << (a+b);
    return a+b;
    cout << (a+b);
}

void printmesaj(){
    cout << "hello zeynep"<< endl;   
}