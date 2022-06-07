#include <bits/stdc++.h>
using namespace std;
int maxSum(int*a, int i, int j){
	int max_sum = 0;
	int curr_sum = a[i];
	for(int k=i+1;k<j;k++){
		if(curr_sum<0 or curr_sum+a[k]<0){
			curr_sum = 0;
		}
		else curr_sum += a[k];
		max_sum = max(max_sum,curr_sum);
	}
	return max_sum;
}

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[2*n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			a[i+n] = a[i]; 
		}
		int ans=0;

		for(int i=0;i<n;i++){ 
			ans = max(ans,maxSum(a,i,i+n));
		}

		cout<<ans<<endl;
	}

	return 0;
}
