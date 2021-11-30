#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int pwr(int x, unsigned int y, int p){
    int rst = 1;
    x = x % p;
    while(y > 0){
        if(y & 1){
            rst = (rst*x) % p;
        }
        y = y/2;
        x = (x*x) % p;
    } 
    return rst;
}

bool miller_rabin(int d, int n){
    int b = rand() % 1 + (n-1);
    int c = pwr(b, d, n);
    if(c == 1 or c == (n-1)){
        return true;
    }
    while(d != (n-1)){
        c = (c*c) % n;
        d *= 2;
        if(c == 1){ return true; }
        if(c == (n-1)){ return false; }
    }
    return false;
}

bool prime(int n, int k){
    if(n <= 1 or n == 4){ return false; }
    if(n <= 3){ return true; }
    int s = (n-1);
    while(s % 2 == 0){
        s /= 2;
    }
    for(int i = 0; i < k; i++){
        if(!miller_rabin(k,n)){ 
            return false; 
        }
    }
    return true;
}

int main(){
    int k = 4;
    for(int n = 99; n < 1000; n++){
        if(prime(n,k)){
            cout << n << " ";
        }
    }
    return 0;
}