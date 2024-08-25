#include <iostream>
#include <string>

using namespace std;

int main(){
    int dizi[5];
    int temp;
    for(int i = 0; i<5;i++){
        cout << i+1 << ".sayıyı giriniz: " <<endl;
        cin>>dizi[i];
    }

    /*eski usül sıralama:
    for(int i=0;i<5;i++){
        for(int j=i+1 ; j<5 ; j++){
            if(dizi[i] > dizi[j]){
                temp = dizi[i];
                dizi[i] = dizi[j];
                dizi[j] = temp;
            }
        }
    }*/


    sort(dizi,dizi+5);
    cout << "sıralanmış dizi : " << endl;
    for(int i=0;i<5;i++){
        cout << dizi[i]<< " ";
    }
    return 0;


}