#include<bits/stdc++.h>

#define P 1000000007

using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        temp = temp % P;
        sum += temp;
        sum  = sum % P;
    }
    cout << sum << endl;
    return 0;
}