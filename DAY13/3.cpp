class Solution {
public:
    bool isPowerOfFour(int n) {
        int c = 0;
         for(int i=0; i<32; i++){
             if(n&(1<<i)){
                 if(i%2==0) c++;
                 else return false;
             }
         }
        if(c==1) return true;
        else return false;
    }
};
