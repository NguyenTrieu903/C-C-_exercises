 #include<iostream>
 using namespace std;
int phanTunFibo(int n);
 int main(){
 	int n;
 	cin>>n;
 	int kq = phanTunFibo(n);
 	cout<<kq;
 }
 int phanTunFibo(int n){
 	int t1=0;
 	int t2=1;
 	int nexTerm=0;
 	for (int i=3;i<=n;i++){
		nexTerm=t1+t2;
		t1=t2;
		t2=nexTerm;
	 }
	return nexTerm;
 }