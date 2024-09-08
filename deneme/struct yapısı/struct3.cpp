#include <iostream>
using namespace std;

struct Adress{
    string city;
    string street;
    int number;
};

struct Person{
    string name;
    int age;
    Adress adresimiz;
};

int main(){
    Person p;
    p.name  = "yunus";
    p.age = 28;
    p.adresimiz.city = "istanbul";
    p.adresimiz.street = "Esenler";
    p.adresimiz.number = 123;

    cout << "name : "<< p.name<<endl;
    cout << "age : "<< p.age<<endl;
    cout << "city : "<< p.adresimiz.city<<endl;
    cout << "street : "<< p.adresimiz.street<<endl;
    cout << "number : "<< p.adresimiz.number<<endl;
 


 

}