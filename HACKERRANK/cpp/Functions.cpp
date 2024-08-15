#include <iostream>
#include <cstdio>
using namespace std;

//https://www.hackerrank.com/challenges/c-tutorial-functions/problem?isFullScreen=true

int max_of_four(int a, int b, int c, int d){
    int max;
    if(a < b && c < b && d < b) max = b;
    else if(b < a  && c < a && d < a) max =  a;
    else if(a < c && b < c && d < c) max = c;
    else if(a < d && c < d && c < d) max = d;
    return max ; 
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}