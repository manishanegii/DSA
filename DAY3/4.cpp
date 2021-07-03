#include<bits/stdc++.h>
using namespace std;
vector<int> decode(vector<int>& encode, int num) {
        vector<int> op;
        op.push_back(num);
        int ans;
        int s = encode.size();
        for(int i=0;i<s;i++){
            ans=op[i]^encode[i];
            op.push_back(ans);
        }
        return op;
    }
int main(){
 vector<int> encode;
 int n;
 cin>>n;
 int val;
 for(int i=0;i<n;i++){
        cin>>val;
        encode.push_back(val);
    }
 int num;
 cin>>num;
 vector<int>op;
 op=decode(encode,num);
 for(auto i:op)
    cout<<i<<" ";
}
