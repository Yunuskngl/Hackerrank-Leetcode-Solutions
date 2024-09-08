#include <iostream>
using namespace std;

int main(){
    int rows,cols;
    cout << "satır sayısını giriniz:" << endl;
    cin>>rows;
    cout << "sütun sayısını giriniz:" << endl;
    cin>>cols;
    int **matrix = new int*[rows];
    for(int i=0 ; i < rows ; i++){
        matrix[i] = new int[cols];
    }

    cout << "matris elemanlarını giriniz: " << endl;
    for(int j=0 ; j< rows ; j++ ){
        for(int k=0; k<cols ;k++){
            cin>> matrix[j][k];
        }
    } 
    cout << "matris elemanları " << endl;
    for(int j=0 ; j< rows ; j++ ){
        for(int k=0; k<cols ;k++){
            cout <<  matrix[j][k] << " ";
        }
        cout<< endl;

    } 


}