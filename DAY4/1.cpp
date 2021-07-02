#include<bits/stdc++.h>
using namespace std;
 
int solution(int arr[], int n)
{
    int num = 0;
    for (int i=0; i < n; ++i)
        num |= arr[i]; 
    int ans = num * pow(2, n-1); 
    return ans;
}
 
int main()
{
    int arr[10], n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << solution(arr, n);
}
