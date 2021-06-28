#include<iostream>
using namespace std;

void reshuffle(int arr[], int n)
{
    int i=(n-1)/2;

    while (i > 0)
    {
        int cnt=i, j=i;
        while (cnt-- > 0)
        {
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
            j++;
        }
        i--;
    }
}
 
int main()
{
    int arr[10], n;
    cin >> n;
    for(int i=0; i<n; ++i){
        cin >> arr[i];
    }
    reshuffle(arr, n);
    for (int i = 0; i < n; i++)
    cout << " " << arr[i] << endl;
 
}