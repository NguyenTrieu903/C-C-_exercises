#include<iostream>
using namespace std;
int X[8]= {-2,-2,-1,1,2,2,1,-1};
int Y[8]= {1,-1,-2,-2,-1,1,2,2};
int main() {
	int mtr[100][100]= {0};
	int m,n, a, b;
	cin>>m>>n;
	cin>>a>>b;
	for(int i=0; i<8; i++) {
		for (int j=0; j<8; j++) {
			mtr[i][j]=0;
		}
	}
	mtr[m][n]=1;
	bool flag = true;
	for (int i=0; i<8; i++) {
		int x = m+X[i];
		int y=n+Y[i];
		if (x==a && y==b) {
			cout<<i+1;
			flag = false;
			break;
		}
	}
	if (flag==true)
		cout<<0;
}