#include <iostream>
using namespace std;

struct Person{
    string name;
    int age;
    float boy;
};

int main(){

    Person *personptr = new Person;
    personptr->name = "zeynep aslan";
    personptr->age = 25;

    cout << "NAME: "<< personptr->name << endl;
    cout << "age: "<< personptr->age << endl;

    delete personptr;

    int x = 5;
    cout << x;
    return 0;
}