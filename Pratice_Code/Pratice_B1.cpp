 #include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int t=0;
    int s=0;
    for (int i=1;i<=n;i++){
        t+=i;
        s+=pow(-1,i+1)*t;
    }
    cout<<s;
}