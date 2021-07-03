#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    vector<int> v;
    for(i=0;i<n;i++)
    {
        int freq=arr[2*i];
        int value=arr[2*i+1];
        if(binary_search(arr,arr+n,freq))
        {
            if(binary_search(arr,arr+n,value))
            {
                for(j=0;j<freq;j++)
                {
                    v.push_back(value);
                }
            }
        }
    }
    for(i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
} 
