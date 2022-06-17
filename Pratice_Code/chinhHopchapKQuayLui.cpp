#include<iostream>
#define SIZE 100
using namespace std;
int x[100];
bool c[100]= {true};
int n,k;
void xuat ();
void Try(int i);
void xuatkhac ();
int main() {
	for (int s=0; s<SIZE; s++) {
		c[s]=true;
	}
	cin>>n>>k;
	Try(1);
}
void xuatkhac () {
	for (int i=0; i<100; i++)
		cout<<c[i]<<" ";
}
void Try(int i) {
	int j;
	for (j=1; j<=n; j++) {
		if (c[j]) {
			x[i]=j;
			if (i==k) {
				xuat();
			} else {
				c[j]=false;
				Try(i+1);
				c[j]=true;
			}
		}
	}
}
void xuat () {
	for (int i=1; i<=k; i++) {
		cout<<x[i]<<" ";
	}
	cout<<endl;
}