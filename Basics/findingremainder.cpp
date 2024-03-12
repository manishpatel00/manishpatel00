#include<iostream>
using namespace std;
int main(){
    int a = 16; // a = divident
    int b = 3;   // b = diviser
    int q = a/b;   // q = quotient
    int r;          // r = remainder
                 //   a = (b*q) + r
    r = a - (b*q);
    cout<<r;
    // cout<<16%3;    % is modulus
}