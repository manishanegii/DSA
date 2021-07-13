#include<bits/stdc++.h>

using namespace std;

int decimaltobase(int num, int base){
  int res = 0, p = 1;
  while(num != 0){
    int n = num % base;
    num = num/base;
    res+= n*p;
    p = p*10;
  }
  return res;

}

int main()
{
    int num, base;
    cin >> num >> base;
    cout << decimaltobase(num, base) << endl;
}
