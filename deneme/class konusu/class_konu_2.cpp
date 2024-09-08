#include <iostream>
#include <string>
using namespace std;


class Student{
private:
    string name;
    int age;
    
public:

    //default constructor
    Student(){
        name = "Unknown";
        age = 0;
    }
            
    //constructor yapısı.(Kurucu fonksiyon)
    Student(string studentName , int studentAge){
        name = studentName;
        age = studentAge;
       
    }

    ~Student(){
        cout << "yapıyı yıktık." << name << endl;
    }

    
    void setAge(int newAge){
        age = newAge;
    }

    void displayInfo(){
        cout << "Name :" << name << endl;
        cout << "age : " << age << endl;
        cout << endl;
    }

};


//pointer ile class yapısına nasıl erişirim ?

int main(){
    Student student1();
    
/*
    Student* studentptr = &student1;

    studentptr->displayInfo();
    studentptr->setAge(25);
    studentptr->displayInfo();
*/

}