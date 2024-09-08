#include <iostream>
#include <time.h>

using namespace std;

int main(){
    int x;
    srand(time(0));
    x = rand()%1000;
    cout << x;

}