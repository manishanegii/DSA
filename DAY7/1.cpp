#include <bits/stdc++.h>

using namespace std;

vector<int> specialNo(vector<vector<int> >& matrix,
                          vector<int>& res)
{
    unordered_set<int> set;
 
    for (int i = 0; i < matrix.size(); i++) {
        int minr = INT_MAX;
        for (int j = 0; j < matrix[i].size(); j++) {

            minr = min(minr, matrix[i][j]);
        }

        set.insert(minr);
    }
 
    for (int j = 0; j < matrix[0].size(); j++) {
        int maxc = INT_MIN;
 
        for (int i = 0; i < matrix.size(); i++) {
 
            maxc = max(maxc, matrix[i][j]);
        }
         if (set.find(maxc) != set.end()) {
            res.push_back(maxc);
        }
    }
    return res;
}
 
int main(){
    vector<vector<int> > mat
        = { { 3, 7, 8 },
            { 9, 11, 13 },
            { 15, 16, 17 } };
 
    vector<int> res;
 
    specialNo(mat, res);
 
    if (res.size() == 0)
        cout << "-1" << endl;
 
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << endl;
 
    return 0;
}
