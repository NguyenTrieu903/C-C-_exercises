 #include<iostream>
 using namespace std;
  int soChuso0(int n);
 int main(){
 	int n;
 	cin>>n;
 	int kq = soChuso0(n);
 	cout<<kq;
 }
 int soChuso0(int n){
 	int d=0;
 	while (n>=5){
 		n=int(n/5);
 		d+=n;
	 }
	return d;
 }