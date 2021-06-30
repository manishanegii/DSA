#include<bits/stdc++.h>

using namespace std;

int goodpairs(int arr[], int n){
    int count = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            if(arr[i]==arr[j] &&i<j)
                count++;
        }
    }
    cout << count << endl;
}

int main()
{
    int arr[10], n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "No of Good Pairs: \n";
    goodpairs(arr, n);
    return 0;
}
