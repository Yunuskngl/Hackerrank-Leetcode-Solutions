#include <iostream>
using namespace std;




int** initmatrix(int rows, int cols) {
    // cols sayısı kadar pointer oluştur (her biri bir satırı temsil eder)
    int** matrix = new int*[cols];
    for(int i = 0; i < cols; i++) {
        matrix[i] = new int[rows]; // Her satırda rows sayısı kadar sütun oluştur
    }
    return matrix;
}

void fillmatrix(int** matrix , int rows,int cols){
    cout << "matris elemanlarını giriniz: " << endl;
    for(int j=0 ; j< cols ; j++ ){
        for(int k=0; k<rows ;k++){
            cin>> matrix[j][k];
        }
    } 
}

void printmatrix(int **matrix , int rows, int cols){
    cout << "matrix :"<<endl;
    for(int j=0 ; j< cols  ; j++ ){
        for(int k=0; k<rows;k++){
            cout<< matrix[j][k] << " ";
        }
        cout<< endl;
    } 
}



int main(){

    int rows = 4,cols = 3;
    
    int **matrix = initmatrix(rows,cols);
    fillmatrix(matrix,rows,cols);
    printmatrix(matrix,rows,cols);

    for (int i=0;i<cols;i++){
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}