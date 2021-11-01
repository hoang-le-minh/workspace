#include<bits/stdc++.h>

using namespace std;

int main(){
    string str;
    int n;
    cin >> n;
    while(n > 0){
        cin >> str;
        int len = str.length();
        if(len > 10){
            cout << str[0] << (len - 2) << str[len - 1] << endl;
        }else{
            cout << str << endl;
        }
        n--;
    }
    return 0;

}