 #include<iostream>
 using namespace std;
int tongTich(int n);
 int main(){
 	int n;
 	cin>>n;
 	int res = tongTich(n);
 	cout<<res;
 }
 int tongTich(int n){
 	int kq=0;
 	int tmp=1;
 	for (int i=1;i<=n;i++){
 		tmp=tmp*i;
		kq=kq+tmp;
	}
	return kq;
 }