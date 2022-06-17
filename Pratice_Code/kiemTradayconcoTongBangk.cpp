#include<iostream>
using namespace std;
void nhap(int a[], int &n);
void xuLy(int a[], int n, int k);
int main() {
	int a[100],n;
	int k;
	cin>>n>>k;
	nhap(a,n);
	xuLy(a,n,k);
}
void xuLy(int a[], int n, int k) {
	int dp[100]= {0};
	dp[0]=1;
	for (int i=0; i<n; i++) {
		dp[a[i]]=1;
		for(int j=k; j>=a[i]; j--) {
			if(dp[j-a[i]]==1)
				dp[j]=1;
		}
	}
	if(dp[k]==1)
		cout<<"YES";
	else
		cout<<"No";
}
void nhap(int a[], int &n) {
	for(int i=0; i<n; i++)
		cin>>a[i];
}
