#include<bits/stdc++.h>
using namespace std;

int mod = 1e9+7;

int main() {
	int n;
	cin>>n;

	int sum = 0;	
	for(int i=0;i<n;i++){
		int x; cin >> x;
		sum += x;
		sum %= mod;
	}
	int ts = sum;

	int q; cin >> q;
	for(int i=0;i<q;i++){
		int x ; cin>>x; 
		sum += ts;
    
		ts = sum;
		sum %= mod;
	}

	cout<<sum%mod<<endl;

	return 0;
}
