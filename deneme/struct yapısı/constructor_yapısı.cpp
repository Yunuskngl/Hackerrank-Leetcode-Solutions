#include <iostream>
using namespace std;

// struct ile constructor yapılarının ismi aynı olmalı!!!
struct Point{
    int x,y;
    string s;
    
    //Constructor
    Point(int xCoord,int yCoord,string scoord){
        x = xCoord;
        y = yCoord;
        s = scoord;
    }
};

int main(){
    Point p(10,20,"yns");

    cout << "point : (" << p.x << ","<< p.y << "," << p.s<< ")" << endl;
    return 0;
}