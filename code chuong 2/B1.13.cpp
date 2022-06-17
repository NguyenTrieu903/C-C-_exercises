 #include<iostream>
using namespace std;
void nhap(int a[][100], int &m , int &n);
void xuat (int a[][100], int m , int n);
void taoBaiMin(int a[][100], int m , int n);
void chuyenGiaTri (int a[][100], int m , int n);
int main ()
{
	int a[100][100]={0};
	int m,n;
	nhap(a,m,n);
	taoBaiMin(a,m,n);
	xuat(a,m,n);
}
void taoBaiMin(int a[][100], int m , int n){
	chuyenGiaTri(a,m,n);
	int x[8]={-1,-1,-1,0,1,1,1,0};
	int y[8]={-1,0,1,1,1,0,-1,-1};
	for (int i=1;i<=m;i++){
		for (int j=1;j<=n;j++){
			if (a[i][j]==0){
				for (int k=0;k<8;k++){
					if (a[i+x[k]][j+y[k]]==9){
						a[i][j]++;
					}
				}
			}
		}
	}
}
void chuyenGiaTri (int a[][100], int m , int n){
	for (int i=1;i<=m;i++){
		for (int j=1;j<=n;j++)
			if (a[i][j]==1)
				a[i][j]=9;
	}
}
void nhap(int a[][100], int &m , int &n){
	cin>>m>>n;
	for (int i=1;i<=m;i++)
		for (int j=1;j<=n;j++)
			cin>>a[i][j];
}
void xuat (int a[][100], int m , int n){
	cout<<endl;
	for (int i=1;i<=m;i++){
		for (int j=1;j<=n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}