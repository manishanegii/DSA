#include<bits/stdc++.h>

using namespace std;

int extratoffee(int arr[], int n){

   int extra;
   int max = 0;
   for(int i=0; i<n; i++){
        if(arr[i] > extra)
            extra = arr[i];
   }
   for(int i=0; i<n; i++){
        if(max > extra+arr[i])
            cout << "T" << " ";
        else
            cout << "F" << " ";

}}

int main(){
    int arr[10], n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    extratoffee(arr, n);
    return 0;
}
