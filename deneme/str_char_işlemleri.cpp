#include <iostream>
#include <string>
//#include <string.h>  string ile arasında fark yok.

using namespace std;

int main(){
    char isimler[3][20] = {{"zeynep aslan"},{"zeynep göktepe"},{"yns"}};
    string isimler2[3] = {"zeynep aslan","zeynep göktepe","yns"};

    cout<< isimler[0] << endl;
    cout << isimler2[0]<< endl;
}