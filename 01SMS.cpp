#include<bits/stdc++.h>

using namespace std;

string sKey[12] = {
    "", "abc", "def",
    "ghi", "jkl", "mno",
    "pqrs", "tuv", "wxyz",
    "", " ", ""
};

int main(){
    int T;
    cin >> T;
    string str;
    getline(cin, str);
    int n = 1;
    while(T > 0){
        getline(cin, str);
        int res = 0;
        for (int i = 0; i < str.size(); i++) {
            int cur;
            for (int j = 0; j < 12 ; j++) {
                for (int k = 0; k < sKey[j].size(); k++) {
                    if (str[i] == sKey[j][k]) {
                        cur = k + 1;
                    }
                }
            }
            res += cur;
        }      
        cout << "Case #" << n <<": "<< res<< "\n";
        n++;
        T--;
    }
    return 0;

}