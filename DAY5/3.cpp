#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int roadPeri(vector<vector<int> >& grid) {
        int ans = 0;
        int r = grid.size();
        int c = grid[0].size();
        for(int i = 0; i<r; i++){
            for(int j = 0; j<c; j++){
                if(grid[i][j] == 1){
                    ans += 4;
                    if(i>0){
                        ans -= grid[i-1][j];
                    }
                    if(i<r-1) {
                        ans -= grid[i+1][j];
                    }
                    if(j>0){
                        ans -=grid[i][j-1];
                    }
                    if(j<c-1){
                        ans -=grid[i][j+1];
                    }
                }
            }
        }
        return ans;
    }
};
