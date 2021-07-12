class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n=(int ) s.size();
        vector<int> ans(n,INT_MAX);
        
        int p=-1;
        for(int i=0;i<n;i++){
            if(s[i]==c){
                p=i;
            }
            if(p!=-1){
                ans[i]=(i-p);
            }
        }
         p=-1;
         for(int i=n-1;i>=0;i--){
            if(s[i]==c) {
                p=i;
            }
            if(p!=-1){
                ans[i]=min(ans[i],(p-i));
            }
        }
        return ans;
    }
};
