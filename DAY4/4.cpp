#include<bits/stdc++.h>

using namespace std;

int diffEncodings(vector<string>& v) {
        string str[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> s;
        for(int i=0;i<v.size();i++){
            int idx;
            string res = "";
            for(int j=0;j<v[i].size();j++){
                idx = v[i][j]-'a';
                res+= str[idx];
            }
            s.insert(res);
        }
        return s.size();
    }

int main(){
    vector<string> v;
    int size;
    string val;
    cin >> size;
    for(int i=0;i<size;i++){
        cin >> val;
        v.push_back(val);
    }
    int cnt = diffEncodings(v);
    cout << cnt ;
}
