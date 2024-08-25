#include <iostream>
using namespace std;

int main(){
    int matris[3][3];
    int i,j;

    for(int i = 0;i<3;i++){
        for(j=0;j<3;j++){
            cout << "lütfen matrisin elemanlarını giriniz[" << i << "]["<< j <<"] : ";
            cin >> matris[i][j];
        }
    }
    for(int i = 0;i<3;i++){
        for(j=0;j<3;j++){
            cout << matris[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}