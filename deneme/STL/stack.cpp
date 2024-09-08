#include <iostream>
#include <stack>
using namespace std;

// last in first out 
int main(){
    stack<int> s1;
    cout << "empty : " << s1.empty() << endl;
    s1.push(10);
    s1.push(30);
    s1.push(50);
    s1.push(40);                          
    s1.push(20);                          
    s1.push(60);                        

    cout << "empty : " << s1.empty() << endl;
    cout << "size  : " << s1.size() <<endl;
    cout << "top : "  << s1.top() << endl;

    s1.pop();
    cout << "top :" << s1.top() <<endl;
    cout << "size  : " << s1.size() <<endl;

    while(!s1.empty()){
        cout << s1.top()<< " ";
        s1.pop();
    }

    

    

}
