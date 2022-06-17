#include <iostream>
using namespace std;
void nhap(int a[][100], int &m, int &n);
int Maxdong(int a[][100], int m, int n, int dong);
int Mincot(int a[][100], int m, int n, int cot);
void handle(int a[][100], int m, int n);
int main()
{
    int a[100][100], m, n;
    nhap(a, m, n);
    handle(a, m, n);
}
void handle(int a[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == Maxdong(a, m, n, i) && a[i][j] == Mincot(a, m, n, j))
                cout << a[i][j] << " ";
        }
    }
}
int Mincot(int a[][100], int m, int n, int cot)
{
    int min = a[0][cot];
    for (int i = 0; i < m; i++)
    {
        if (a[i][cot] < min)
        {
            min = a[i][cot];
        }
    }
    return min;
}
int Maxdong(int a[][100], int m, int n, int dong)
{
    int max = a[dong][0];
    for (int j = 0; j < n; j++)
    {
        if (a[dong][j] > max)
        {
            max = a[dong][j];
        }
    }
    return max;
}
void nhap(int a[][100], int &m, int &n)
{
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
}