#include<iostream>
using namespace std;
 
int remove_duplicates(int arr[], int n)
{
    
    int a[n], j=0;
     for (int i=0; i < n-1; i++)
        if (arr[i] != arr[i+1])
            arr[j++] = arr[i];
 
    arr[j++] = arr[n-1];
 
    return j;
}
 
int main()
{
    int arr[10], n;
    cin >> n;
    for(int i=0; i<n; ++i){
        cin >> arr[i];
    }
    n = remove_duplicates(arr, n);

    for (int i=0; i<n; i++)
       cout << arr[i] << " " << endl;
 
    return 0;
}
