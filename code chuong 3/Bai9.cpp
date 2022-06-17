 #include<iostream>
using namespace std;
void nhapMang(int a[], int &n);
void xuatMang (int a[], int n);
void sapXepgiamDan(int a[] , int n);
int main (){
	int a[100],n;
	nhapMang(a,n);
	sapXepgiamDan(a,n);
	xuatMang(a,n);
}
void sapXepgiamDan(int a[] , int n){
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (a[i]<a[j]){
				int tmp =a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
}
void nhapMang(int a[], int &n){
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
}
void xuatMang (int a[], int n){
	for (int i=0;i<n;i++)
		cout<<a[i]<<" ";
}