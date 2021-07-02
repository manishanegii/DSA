#include <bits/stdc++.h>
using namespace std;
void print_vector(vector<auto> v){
   cout << "[";
   for(int i = 0; i<v.size(); i++){
      cout << v[i] << ", ";
   }
   cout << "]"<<endl;
}
class Solution {
   public:
   void update(int index,vector <int>& bit, int n){
      while(index<=n){
         bit[index]++;
         index += (index)&(-index);
      }
   }
   int query(int index, vector <int> bit){
      int ans = 0;
      while(index>0){
         ans+=bit[index];
         index -= index&(-index);
      }
      return ans;
   }
   vector<int> countSmaller(vector<int>& nums) {
      int n = nums.size();
      vector <int> res(n);
      if(!n)return res;
      int maxx = 0;
      int minn = nums[0];
      for(int i =1;i<n;i++)minn = min(nums[i],minn);
      for(int i =0;i<n;i++){
         nums[i] = nums[i]-minn+1;
         maxx = max(nums[i],maxx);
      }
      vector <int> bit(maxx+1);
      for(int i =n-1;i>=0;i--){
         int num = nums[i]-1;
         int x = query(num,bit);
         res[i] = x;
         update(num+1,bit,maxx);
      }
      return res;
   }
};
main(){
   Solution ob;
   vector<int> v = {5,2,7,1};
   print_vector(ob.countSmaller(v));
}
