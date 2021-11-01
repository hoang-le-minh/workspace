#include<bits/stdc++.h>

using namespace std;

void input(int a[], int n){
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}

int mask[31];

int check(int a[], int n, int b[], int m){
    for(int i = 0; i < 31; i++){
        mask[i] = 0;
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(b[i] == a[j]){
                mask[i] = 1;
                break;
            }
        }
    }
    for(int i = 0; i < m; i++){
        if(!mask[i]) return 0;
    }
    return 1;
}

int main(){
    int n, m;
    int a[31], b[31];
    cin >> n;
    input(a, n);
    cin >> m;
    input(b, m);
    cout << check(a, n, b, m) << endl;
    return 0;
}