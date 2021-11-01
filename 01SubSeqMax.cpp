#include<bits/stdc++.h>

using namespace std;

int subSeqMax(vector<int> vt, int n){
	int sum = 0;
	int res = 0; // ket qua trong so lon nhat;
	
	for(int i = 0; i < n; i++){
		sum += vt[i];
		if(sum < 0){
			sum = 0;
		}else{
			if(sum > res){
				res = sum;
			}
		}
	}
	return res;
}

int main(){
	int n;
	cin >> n;
	vector<int> vt;
	int temp;
	for(int i = 0; i < n; i++){
		cin >> temp;
		vt.push_back(temp);
	}
	cout << subSeqMax(vt, n);
	return 0;
}
