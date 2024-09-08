#include <iostream>
using namespace std;

struct Person{
    string name;
    int age;
    float height;

};


int main(){
    Person person1;
    person1.age = 21;
    person1.name = "yunus";
    person1.height = 1.82;

    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Height: " << person1.height << endl;

    int x = 5;
    cout << x;
    
    return 0;
}