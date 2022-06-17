 #include<iostream>
 using namespace std;
 void chuyen10Sang16(int n, char kq[]);
 int main (){
 	int n;
	cin>>n;
	char kq[20];
	chuyen10Sang16(n,kq);
	cout<<kq;
 }
 void chuyen10Sang16(int n, char kq[]){
	int d=0;
 	while (n>0){
 		int x=n%16;
 		n=n/16;
 		if (x<10){
 			kq[d]= x + '0';
		}else {
			kq[d] = x - 10 + 'A';
		}
		d++;
	}
	kq[d] = '\0';
	strrev(kq);
 }
 