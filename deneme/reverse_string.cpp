#include <iostream>
#include <cstring>  //strlen için kullanıyoruz.
using namespace std;
void printReverse(char *str){
    int length = strlen(str);
    char *end = str+length -1;
    while(end >= str){
        cout << *end;
        end--;

    }
    cout << endl;
}

int main(){
    char str[] = "pointerlar";
    cout << "orijinal str : " << str << endl;
    cout << "tersten yazılmış str: ";
    printReverse(str);
    return 0;
}
