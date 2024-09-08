#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num){
    int temp = num , sum  = 0;
    int n = log10(num) +1;

    while(num>0){
        int digit = num%10;  
        sum += pow(digit,n);
        num = num/10;
    }

    return (sum == temp);

}

int main(){
    
    int num;
    cout << "enter the number:" << endl;
    cin >> num;
    if(isArmstrong(num)) 
        cout << num << "bir armstrong sayıdır!"  <<endl;
    else 
        cout << num <<"bir armstrong sayı değildir!" <<endl;

    
    return 0 ;
}