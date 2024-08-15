#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int n;
    double x;
    int a = 1;
    double seri = 0;

    cout << "pozitif tamsayı: ";
    cin >> n;

    cout << "reel sayı: ";
    cin >> x;

    for (int i = 2; i <= 2 * n; i += 2) {
        seri += a /pow(x, i);
        a += 2;
    }

    cout << "pozitif tamsayı: " << n << endl;
    cout << "reel sayı: " << x << endl;
    cout << "seri: " << seri << endl;


    return 0;
}



