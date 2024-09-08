#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> arr ;
    

    for (int i = 1 ; i<=8 ; i++){
        arr.push_back(i);
    }
    cout <<"Empty : " << arr.empty() <<endl;
    cout <<"size :" << arr.size() << endl;

    arr.resize(11);

    for(auto k : arr) //for each
        cout<< k << " ";
    cout << endl;

    arr.erase(arr.end()-1);
    arr.erase(arr.end()-1);
    arr.erase(arr.begin()+1 , arr.begin()+3);
    cout << "size : " << arr.size() << endl;
    for(auto k : arr) //for each
        cout<< k << " ";
    cout << endl;


    reverse(arr.begin(),arr.end());
    for(auto k : arr) //for each
        cout<< k << " ";
    cout << endl;

    sort(arr.begin(),arr.end());
     for(auto k : arr) //for each
        cout<< k << " ";
    cout << endl;



}