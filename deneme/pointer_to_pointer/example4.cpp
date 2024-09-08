#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "kaç adet string gireceksiniz?"<< endl;
    cin >>n;
    cin.ignore();  // gereksiz karakterlerin girişten temizlenmesini sağlar


    char **stringlist = new char*[n];


    cout << "stringleri giriniz: " << endl;
    for (int i=0;i<n;i++){
        char input[100]; //geçici değişken
        cin.getline(input,100);

        stringlist[i] = new char[strlen(input)+1];
        strcpy(stringlist[i],input);

    }

    cout << "girilen stringler : " << endl;
    for(int i=0;i<n;i++){
        cout << stringlist[i] << endl;
    }

    for(int i=0;i<n;i++){
        delete[] stringlist[i];

    }
    delete[] stringlist;
    return 0;
}