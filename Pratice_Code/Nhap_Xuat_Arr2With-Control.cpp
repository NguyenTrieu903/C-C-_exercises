#include<iostream>
using namespace std;
void inputArray(int *&a , int &m , int &n);
void outputArray (int *a , int m , int n);
void intputArray1 (int *&b, int &m , int &n);
int main(){
//	int *a;
	int *b;
	int m,n;
//	inputArray(a,m,n);
	intputArray1(b,m,n);
//	outputArray(a,m,n);
	outputArray(b,m,n);
	delete b;
}
void intputArray1 (int *&b, int &m , int &n){
	cin>>m>>n;
	b= new int [m*n];
	for (int i=0;i<m*n;i++){
		cin>>b[i];
	}
}
void outputArray (int *a , int m , int n){
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			cout<<a[i*n+j]<<" "; // cout<<a[i][j]
		}
		cout<<endl;
	}
}
void inputArray(int *&a , int &m , int &n){
	cin>>m>>n;
	a =  new int[m*n];
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++)
			cin>>a[i*n+j];
	}
}