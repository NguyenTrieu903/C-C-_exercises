 #include<iostream>
 # define SIZE 100
 // Idea:
 /*
 	Array1(a,n) -> Array2(b,m,n):
 	for k:
 	b[k/n][k%n] = a[k]
 	
 	----------------------------
 	Array2(b,m,n) -> Array1(a,n):
 	for i:
 		for j:
 	a[i*n+j]=b[i][j]
 */
using namespace std;
void chuyen1ChieuSang2Chieu(int b[],int nB, int c[][SIZE], int m , int n);
void xuat2Chieu(int a[][SIZE], int m , int n);
void chuyen2ChieuSang1Chieu(int a[][SIZE], int m , int n, int b[]);
void nhap2Chieu(int a[][SIZE], int &m , int &n);
void xuat1Chieu (int a[], int n);
void nhap1Chieu(int a[],int &n);
 int main(){
 	int a[SIZE][SIZE];
 	int b[SIZE*SIZE];
 	int c[SIZE][SIZE];
 	int m,n;
 	nhap2Chieu(a,m,n);
// 	nhap1Chieu(b,m*n);
 	chuyen2ChieuSang1Chieu(a,m,n,b);
 	chuyen1ChieuSang2Chieu(b,m*n,c,m,n);
// 	xuat1Chieu(b,m*n);
 	xuat2Chieu(c,m,n);
 }
 void nhap1Chieu(int a[],int &n){
	cin>>n;
	for (int i=0;i<n;i++)
		cin>>a[i];
 }
 void chuyen1ChieuSang2Chieu(int b[], int nB,int c[][SIZE], int m , int n){
 	for (int i=0;i<nB;i++){
 		c[i/n][i%n]=b[i];
	 }
 }
 void xuat2Chieu(int a[][SIZE], int m , int n){
 	for (int i=0;i<m;i++){
 		for (int j=0;j<n;j++)
 			cout<<a[i][j]<<" ";
 		cout<<endl;
	 }
 }
void chuyen2ChieuSang1Chieu(int a[][SIZE], int m , int n, int b[]){
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			b[i*n+j]=a[i][j];
		}
	}
}
 void nhap2Chieu(int a[][SIZE], int &m , int &n){
 	cin>>m>>n;
 	for (int i=0;i<m;i++){
 		for (int j=0;j<n;j++)
 			cin>>a[i][j];
	 }
 }
 void xuat1Chieu (int a[], int n){
 	for (int i=0;i<n;i++)
 		cout<<a[i]<< " ";
 }