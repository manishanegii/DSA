#include <bits/stdc++.h>

using namespace std;

string longestcommonsuffix(vector<string>& str){
    
    for(int i=0; i<str.size(); i++){
        reverse(str[i].begin(), str[i].end());
    }
    
    string s = str[0];
    for(int i=0; i<str.size(); i++){
        while(str[i].find(s)!=0){
            s = s.substr(0, s.length()-1);
            if(s.empty())
            return " ";
        }
    }
}

int main(){
    int n;
    cin >> n;
    string st, ss;
    vector<string> arr;
    for(int i=0; i<n; i++){
        cin >> st;
        arr.push_back(st);
    }
    
    ss = longestcommonsuffix(arr);
    reverse(ss.begin(), ss.end());
    cout << ss;
    
    return 0;
}
