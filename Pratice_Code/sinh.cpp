#include<iostream>
#define SIZE 20
using namespace std;
int a[SIZE]= {0},n;
void sinhnhiPhan(int n);
void datBang0 (int k);
void xuat ();
int main() {
	cin>>n;
	sinhnhiPhan(n);
}
void sinhnhiPhan(int n) {
	xuat();
	int i=n-1	;
	while (i>0){
		if (a[i]==1){
			i--;
		}
		if (a[i]==0){
			a[i]=1;
			datBang0(i+1);
			xuat();
			i=n-1;
		}
	}
}
void datBang0 (int k){
	for (int i=k;i<n;i++){
		a[i]=0;
	}
}
void xuat () {
	for (int i=0; i<n; i++) {
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
