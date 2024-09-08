#include <iostream>
using namespace std;

void diziyi_birleştirme(int array1[],int array2[],int array3[],int s1, int s2);
void diziyi_yazdırma(int size , int array[]);
void diziolusturma(int size,int array[]);

int main(){
    int size1,size2;
    cout << "lütfen sırasıyla birinci ve ikinci dizi için size değerlerini girin:"<<endl;
    cin>> size1>> size2;
    int array1[size1];
    diziolusturma(size1,array1);
    int array2[size2];
    diziolusturma(size2,array2);
    diziyi_yazdırma(size1,array1);
    diziyi_yazdırma(size2,array2);
    int array3[size1+size2];
    diziyi_birleştirme(array1,array2,array3,size1,size2);
    diziyi_yazdırma(size1+size2,array3);


}

void diziolusturma(int size,int array[]){
    cout << "lütfen dizi elemanlarını giriniz:" <<endl;
    for(int i = 0 ; i< size; i++){
        cin >> array[i];
    }
}

void diziyi_yazdırma(int size , int array[]){
    cout <<"dizi elemanları : " << endl;
    for(int i = 0 ; i< size; i++){
        cout <<  array[i] << " ";
    }
    cout<< endl;

}

void diziyi_birleştirme(int array1[],int array2[],int array3[],int s1, int s2){
    int sayac = 0;
    for(int i = 0 ; i< s1 ; i++){
        array3[sayac] = array1[i];
        sayac++;
    }
    for(int j = 0 ; j< s2 ; j++){
        array3[sayac] = array2[j];
        sayac++;
    }



}

