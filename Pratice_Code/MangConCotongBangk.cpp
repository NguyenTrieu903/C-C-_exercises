 
/* A simple program to print subarray
with sum as given sum */
#include <bits/stdc++.h>
using namespace std;
 
/* Returns true if the there is a subarray
of arr[] with sum equal to 'sum' otherwise
returns false. Also, prints the result */
int subArraySum(int arr[], int n, int sum, int b[], int &nb)
{
    int curr_sum, i, j;
    nb=0;
 
    // Pick a starting point
    for (i = 0; i < n; i++) {
        curr_sum = arr[i];
 
        // try all subarrays starting with 'i'
        for (j = i + 1; j <= n; j++) {
            if (curr_sum == sum) {
            	b[nb++]=i;
            	b[nb++]=j-1;
                return 1;
            }
            if (curr_sum > sum || j == n)
                break;
            curr_sum = curr_sum + arr[j];
        }
    }
    cout << "No subarray found";
    return 0;
}
void xuatVitri (int a[], int n , int x , int y){
	for(int i=x;i<=y;i++)
		cout<<a[i]<<" ";
}
// Driver Code
int main()
{
    int arr[] = {1,5,9,6,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 10;
    int b[100],nb;
    subArraySum(arr, n, sum,b,nb);
    xuatVitri(arr,n,b[0],b[1]);
    return 0;
}
