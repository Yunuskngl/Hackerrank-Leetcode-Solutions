#include <iostream>
#include <queue>

using namespace std;

int main(){
/*  Queque yapısı :

    queue <int>q1;
    cout << q1.empty()<< endl;

    q1.push(10);
    q1.push(30);
    q1.push(50);
    q1.push(40);
    q1.push(20);

    cout << q1.empty()<< endl;
    cout << q1.size()<< endl;
    cout << q1.front()<< endl;
    cout << q1.back()<< endl;

    q1.pop();

    cout << q1.size()<< endl;
    cout << q1.front()<< endl;
    cout << q1.back()<< endl;


*/

    priority_queue<int,vector<int>,greater<int>> pq1;

    cout<< pq1.empty()<< endl;

    pq1.push(10);
    pq1.push(30);
    pq1.push(50);
    pq1.push(40);
    pq1.push(20);

    cout << "size :  " << pq1.size() << endl;
    cout << "top : " << pq1.top() << endl;

    pq1.pop();

     cout << "size :  " << pq1.size() << endl;
    cout << "top : " << pq1.top() << endl;


    while (!pq1.empty()){
        cout << pq1.top() << endl;
        pq1.pop();
    }
 

}