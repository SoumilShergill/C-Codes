#include <bits/stdc++.h>
using namespace std;

int main() 
{
	 ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	// #ifndef ONLINE_JUDGE
	//     freopen("input.txt" , "r" , stdin);
	//     freopen("output.txt" , "w" , stdout);
	// #endif

	int R; cin>>R;
	int C; cin>>C;
	int a[R][C];

	for(int i = 0; i<R; i++)
		for(int j = 0; j<C; j++)
			cin>>a[i][j];

	int m = R;
	int n = C;
	int i, k = 0, l = 0;

	while (k < m && l < n) {
		for (i = l; i < n; ++i) {
			cout << a[k][i] << ", ";
		}
		k++;
		for (i = k; i < m; ++i) {
			cout << a[i][n - 1] << ", ";
		}
		n--;
		if (k < m) {
			for (i = n - 1; i >= l; --i) {
				cout << a[m - 1][i] << ", ";
			}
			m--;
		}

		if (l < n) {
			for (i = m - 1; i >= k; --i) {
				cout << a[i][l] << ", ";
			}
			l++;
		}
	}

	cout<<"END";
	return 0;
}
