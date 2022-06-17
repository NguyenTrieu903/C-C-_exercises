#include <iostream>
#define SIZE 15
using namespace std;
int a[SIZE][SIZE] = {0}, n = 6;
int X[8] = {-2, -2, -1, 1, 2, 2, 1, -1};
int Y[8] = {-1, 1, 2, 2, 1, -1, -2, -2};
int dem = 0;
void diTuan(int x, int y);
void xuat();
int main()
{
    diTuan(2, 3);
    cout << "Khong co phuong an";
    //	xuat();
}
void diTuan(int x, int y)
{
    dem++;
    a[x][y] = dem;
    if (dem == n * n)
    {
        xuat();
        exit(0);
    }
    for (int i = 0; i < 8; i++)
    {
        int xx = x + X[i];
        int yy = y + Y[i];
        if (xx >= 0 && xx < n && yy >= 0 && yy < n && a[xx][yy] == 0)
        {
            diTuan(xx, yy);
        }
    }
    dem--;
    a[x][y] = 0;
}
void xuat()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}