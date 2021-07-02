#include <bits/stdc++.h>
using namespace std;

int sortcount(int arr[], int n)
{
	int new_arr[n];

	for (int i = 0; i < n; i++)
		new_arr[i] = arr[i];
		
	int count = 0;
	sort(arr, arr + n);
	for (int i = 0; i < n; i++) {
		if (arr[i] != new_arr[i]) {
			count++;
		}
	}
	return count;
}


int main()
{
	int n;
	int arr[n];
	cin >> n;
	for(int i=0; i<n; i++){
	    cin >> arr[i];
	}

	cout << sortcount(arr, n);

	return 0;
}
