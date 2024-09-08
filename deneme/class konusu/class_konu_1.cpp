#include <iostream>
#include <string>
using namespace std;


class Student{
private:
    string name;
    int age;
    int grade;

public:
    //constructor yapısı.(Kurucu fonksiyon)
    Student(string studentName , int studentAge, int studentGrade){
        name = studentName;
        age = studentAge;
        grade = studentGrade;
    }

    string getName(){
        return name;
    }

    int getAge(){
        return age;
    }

    int getGrade(){
        return grade;
    }

    void setName(string newName){
        name = newName;
    }

    void setAge(int newAge){
        age = newAge;
    }

    void setGrade(int newGrade){
        grade = newGrade;
    }

    void displayInfo(){
        cout << "Name :" << name << endl;
        cout << "age : " << age << endl;
        cout << "grade :" << grade << endl;
        cout << endl;
    }

};
int main(){

    Student student1("yunus",21,99);
    
    student1.displayInfo();

    student1.setAge(22);
    student1.setGrade(30);

    student1.displayInfo();
    
}