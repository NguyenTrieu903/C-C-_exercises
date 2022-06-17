#include<iostream>
using namespace std;
int pasCal(int k, int n);
int main() {
	int n;
	cin>>n;
	int i,k;
	for (int i=0; i<=n; i++) {
		for (int k=0; k<=i; k++) {
			cout<<pasCal(k,i)<<" ";
		}
		cout<<endl;
	}
	return 0;
}
int pasCal(int k, int n) {
	if (k==0 || k==n) {
		return 1;
	} else {
		return pasCal(k-1,n-1)+pasCal(k,n-1);
	}
}