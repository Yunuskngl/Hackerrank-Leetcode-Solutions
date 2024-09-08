//dosyaya yazma  (ofstream)

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    
    ofstream dosyaYaz("ornek.txt");

    if(dosyaYaz.is_open()){
        dosyaYaz << "merhaba"<< endl;
        dosyaYaz << "merhaba zeynep"<< endl;
        dosyaYaz.close();
        cout << "asdasdas dosya yazma işlemi bitti."<< endl;
    }
    else{
        cout << "dosya açılmadı "<< endl;
    }
    return 0;
}

