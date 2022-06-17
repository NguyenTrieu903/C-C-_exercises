#include <bits/stdc++.h>
void xuat(int a[][100], int m, int n);
using namespace std;
int main() {
	int k;
	int n;
	cin>>n>>k;
	int arr[100];
	for(int i=0; i<n; i++)
		cin>>arr[i];
	int dp[100][100];
	for (int i = 1; i <= n; i++) {

		for (int j = 0; j < k ; j++) {
			dp[i][j] = dp[i - 1][j];
		}
		
		dp[i][arr[i - 1] % k] = max(dp[i][arr[i - 1] % k], arr[i - 1]);

		for (int j = 0; j < k; j++) {
			int m = (j + arr[i - 1]) % k;
			if (dp[i - 1][j] != 0)
				dp[i][m] = max(dp[i][m],arr[i - 1] + dp[i - 1][j]);
		}

	}
	xuat(dp,n,k);
	cout <<dp[n][0];
	return 0;
}
void xuat(int a[][100], int m, int n) {
	for (int i=1; i<=m; i++) {
		for (int j=0; j<n; j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
}