#include <iostream>
using namespace std;

int stringlength(char *str){
    int length = 0 ;
    /* 
    while(*str != '\0'){
        length++;
        str++;
    }*/
    length = strlen(str);
    return length;
    
}

int main(){
    char str[] = "yunus kangal";
    int len = stringlength(str);
    cout << len << endl;
}


