#include<iostream>
#define SIZE 20
using namespace std;
int x[SIZE];
void xuat(int x[100], int n);
void sinhTapconkPT(int n, int k);
int main() {
	int n,k;
	cin>>n>>k;
	sinhTapconkPT(n,k);
//	int n,k,i,j;
//	cin>>n>>k;
//	for (int i=1; i<=k; i++) {
//		x[i]=i;
//	}
//	while(true) {
//		for (i=1; i<=k-1; i++)
//			cout<<x[i]<<" ";
//		cout<<x[k]<<endl;
//		i=k;
//		while(i>0 && x[i]==n-k+i)
//			i--;
//		if (i>0) {
//			x[i]++;
//			for (j=i+1; j<=k; j++) {
//				x[j]=x[j-1]+1;
//			}
//		} else if (i==0)
//			break;
//	}
}
void sinhTapconkPT(int n, int k) {
	int i,j;
	for (int i=1; i<=k; i++) {
		x[i]=i;
	}
	while(true) {
//		for (i=1; i<=k-1; i++)
//			cout<<x[i]<<" ";
		xuat(x,k);
		cout<<x[k]<<endl;
		i=k;
		while(i>0 && x[i]==n-k+i)
			i--;
		if (i>0) {
			x[i]++;
			for (j=i+1; j<=k; j++) {
				x[j]=x[j-1]+1;
			}
		} else if (i==0)
			break;
	}
}
void xuat(int x[100], int n) {
	for (int i=1; i<=n-1; i++) {
		cout<<x[i]<<" ";
	}
}