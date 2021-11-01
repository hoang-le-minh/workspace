#include<bits/stdc++.h>

#define P 1000000007

using namespace std;

unsigned long long f(unsigned long long a, unsigned long long b){
    if(b == 0) return 1;
    unsigned long long X = f(a, b/2);
    if((b % 2) != 0) return ((X*X) % P * (a % P)) % P;
    return (X * X) % P;
}

int main(){
    unsigned long long a, b;
    cin >> a >> b;
    cout << f(a, b) << endl;
    return 0;
}