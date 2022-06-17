#include<iostream>
#define SIZE 100
void nhapMatran (int a[][100], int &m , int &n);
void xuatMatran (int a[][100], int m , int n);
bool check (int a[][100], int m , int n);
int sumColumns (int a[][100], int m , int n);
int sumDiagonal (int a[][100], int m , int n);
int sumRows (int a[][100] , int m , int n);
using namespace std;
int main(){
	int a[SIZE][SIZE];
	int m,n;
	nhapMatran (a,m,n);
	cout<<check(a,m,n);
}
bool check (int a[][100], int m , int n){
	if (sumDiagonal(a,m,n)!=sumColumns(a,m,n))
		return false;
	return true;
}
int sumColumns (int a[][100], int m , int n){
	int sum;
	for (int i=0;i<n;i++){
		sum=0;
		for(int j=0;j<n;j++){
			sum+=a[j][i];
		}
	}
	return sum;
}
int sumRows (int a[][100] , int m , int n){
	int sum;
	for (int i=0;i<m;i++){
		sum=0;
		for(int j=0;j<n;j++){
			sum+=a[i][j];
		}
	}
	return sum;
}
int sumDiagonal (int a[][100], int m , int n){
	int sum=0;
	for (int i=0;i<m;i++){
		sum+=a[i][i];
	}
	return sum;
}
void nhapMatran (int a[][100], int &m , int &n){
	cin>>m>>n;
	for (int i=-0;i<m;i++){
		for (int j=0;j<n;j++)
			cin>>a[i][j];
	}
}
void xuatMatran (int a[][100], int m , int n){
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
}