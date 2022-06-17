 #include<iostream>
 using namespace std;
  double phanSoGT(int n);
 int main(){
 	int n;
 	cin>>n;
 	double kq = phanSoGT(n);
 	cout<<kq;
 }
 double phanSoGT(int n){
 	double kq =0;
 	int j=1;
 	for (int i=1;i<=n;i++){
 		j=j*i;
 		kq+=1.0/(j);
	 }
 	return kq;
 }