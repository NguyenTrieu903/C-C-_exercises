#include<stdio.h>
#include<math.h>
struct phanso
{
	int tuso;
	int mauso;
};
typedef struct phanso PHANSO;
int kiemtra(PHANSO s);
void nhap(PHANSO &s1);
void xuat(PHANSO s1);
void nhap(PHANSO s[50],int &n);
void xuat(PHANSO s[50],int n);
int ucln(int a,int b);
PHANSO tong2phanso(PHANSO s1,PHANSO s2);
PHANSO tong1mangps(PHANSO s[50],int n);
int max2phanso(PHANSO s1,PHANSO s2);
PHANSO max1mang(PHANSO s[50],int n);
PHANSO min1mang(PHANSO s[50],int n);
void sapxep(PHANSO s[50],int n);
int main()
{
	PHANSO s[50];
	int n;
	nhap(s,n);
	xuat(s,n);
	PHANSO kq=tong1mangps(s,n);
	PHANSO kq1=max1mang(s,n);
	PHANSO kq2=min1mang(s,n);
	sapxep(s,n);
}
int kiemtra(PHANSO s)
{
	if(s.mauso==0)
		return 0;
	else
		return 1;
}
void nhap(PHANSO &s1)
{
	printf("\nTu so la: ");
	scanf("%d",&s1.tuso);
	printf("\nMau so la: ");
	scanf("%d",&s1.mauso);
	if(kiemtra(s1)==0)
	printf("nhaplai");
}
void xuat(PHANSO s1)
{
	printf("%d/%d",s1.tuso,s1.mauso);
}
void nhap(PHANSO s[50],int &n)
{
	printf("Nhap So Phan So trong mang: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("\nPhan so %d: ",i+1);
		nhap(s[i]);
	}
}
void xuat(PHANSO s[50],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nPhan so %d: ",i+1);
		xuat(s[i]);
	}
}
int ucln(int a,int b)
{
	a=abs(a);
	b=abs(b);
	while(a!=b)
	{
		if(a>b)
		{
			a=a-b;
		}
		else
		{
			b=b-a;
		}
	}
	return a;
}
PHANSO rutgon(PHANSO s1)
{
	int UCLN=ucln(s1.tuso,s1.mauso);
	s1.tuso=s1.tuso/UCLN;
	s1.mauso=s1.mauso/UCLN;
	return s1;
}
PHANSO tong2phanso(PHANSO s1,PHANSO s2)
{
	PHANSO kq;
	kq.tuso=s1.tuso*s2.mauso+s1.mauso*s2.tuso;
	kq.mauso=s1.mauso*s2.mauso;
	kq=rutgon(kq);
	return kq;
}
PHANSO tong1mangps(PHANSO s[50],int n)
{
	PHANSO kq=s[0];
	for(int i=1;i<n;i++)
	{
		kq=tong2phanso(kq,s[i]);
	}
	printf("\nTong mang phan so la: ");
	xuat(kq);
}
int max2phanso(PHANSO s1,PHANSO s2)
{
	if((float(s1.tuso)/s1.mauso)<float(s2.tuso)/s2.mauso)
		return 1;
	else
		return 0;
	
}
PHANSO max1mang(PHANSO s[50],int n)
{
	PHANSO max=s[0];
	for(int i=1;i<n;i++)
	{
		if(max2phanso(max,s[i])==1)
		{
			max=s[i];
		}
	}
	printf("\nPhan so lon nhat la: ");
	xuat(max);
}
PHANSO min1mang(PHANSO s[50],int n)
{
	PHANSO min=s[0];
	for(int i=1;i<n;i++)
	{
		if(max2phanso(min,s[i])==0)
		{
			min=s[i];
		}
	}
	printf("\nPhan so nho nhat la: ");
	xuat(min);
}
void sapxep(PHANSO s[50],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(max2phanso(s[i],s[j])==0)
			{
				PHANSO t=s[i];
				s[i]=s[j];
				s[j]=t;
			}
			
		}
	}
	xuat(s,n);
}

