#include <stdio.h>
#include <bits/stdc++.h>

//https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?isFullScreen=true

void update(int *a,int *b) {
    *a = *a+*b;
    *b=abs(*a-*b-*b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
