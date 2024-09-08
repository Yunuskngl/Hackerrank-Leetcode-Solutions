#include <iostream>
using namespace std;


struct Rectangle{
    int width;
    int height;

    int area(){
        return width*height;
    }

public:
//özel bir üye
int id;
};

int main(){
    Rectangle r;
    r.width = 5;
    r.height = 10;

    cout << "area: "<< r.area() << endl;
    r.id = 1;
}