#include<bits/stdc++.h>
using namespace std;

void aaa(int *a, int *b) {
    *a = *a + 1;
    *b = *b + 1;
}

int main() {
    int a = 10;
    int b = 5;
    aaa(&a, &b);
    cout << a << b;
}