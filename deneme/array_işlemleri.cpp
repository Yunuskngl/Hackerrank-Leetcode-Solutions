#include <iostream>
using namespace std;

int main(){
    int a[6] = {1,2,3,4,5,5};
    float b[5] = {1.2,3.4,2.6,123,7.235234};
    for(int i=0;i<6;i++){
        cout<< a[i] << endl;
    }
    for(int i=0;i<5;i++){
        cout<< b[i] << endl;
    }
    double m[3];
    for(int k = 0 ; k <3; k++){
        cin >> m[k];
    }
    for(int k = 0 ; k <3; k++){
        cout<< m[k]<<endl;
    }

}