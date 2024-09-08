#include <iostream>
using namespace std;

struct Rectangle{
    int width;
    int height;

};

int area(Rectangle *r){
    return r->width * r->height;
}

int main(){
    Rectangle rect = {10,5};
    cout << "Area:" << area(&rect) << endl;
    return 0;

}