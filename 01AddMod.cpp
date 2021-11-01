#include<bits/stdc++.h>

using namespace std;

unsigned long long n = 1000000007;
int soDu(int x){
	int tich = x/n;
	int res = x - tich*n;
	return res;
}

int main(){
	unsigned long long a, b;
	cin >> a >> b;
	unsigned long long n = 1000000007;
	a = soDu(a);
	b = soDu(b);
	cout << soDu(a+b);
	return 0;
}
