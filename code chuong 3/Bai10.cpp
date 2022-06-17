 #include<iostream>
 using namespace std;
 void nhapMang(int a[], int &n);
 void xuatMang (int a[], int n);
int timNhiphan (int a[], int n , int x);
 int main(){
 	int a[100],n;
 	int x;
 	nhapMang(a,n);
 	cout<<"Nhap x ";
 	cin>>x;
 	cout<<timNhiphan(a,n,x);
 }
 int timNhiphan (int a[], int n , int x){
 	int left=0;
 	int right = n-1;
 	int middle = 0 ;
 	while (left<=right){
 		middle=(left+right)/2;
 		if (a[middle]==x)
 			return middle;
 		if (x>a[middle])
 			left=middle+1;
 		else 
 			right=middle-1;
	}
	return -1;
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