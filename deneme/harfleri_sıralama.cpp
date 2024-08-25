#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main(){
    string kelime;
    cout << "kelimeyi giriniz:";
    cin >> kelime;
    printf("%d\n",kelime[0]); // ascii kodunu yazdırıyorum.
/*    for(int i=0;i<kelime.length();i++){
        for(int j=i+1;j<kelime.length();j++){
            if(kelime[i]>kelime[j]){
                char temp = kelime[i];
                kelime[i] = kelime[j];
                kelime[j] = temp;
            }
        }
    }*/

    sort(kelime.begin(),kelime.end());
    cout << "sıralanmış kelime : " << kelime << endl;

}