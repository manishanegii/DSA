#include<bits/stdc++.h>

using namespace std;

int basetodecimal(int num, int base){
	int res = 0, p = 1;
	while(num != 0){
		int n = num%10;
		res+= n*p;
		p*= base;
	}
	return res;

}

int main()
{
    int num, base;
    cin >> num >> base;
    cout << basetodecimal(num, base) << endl;
}
