
class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = 4;
        while(n--){
            for(int i=0; i<mat.size(); i++){
                for(int j=i; j<mat.size(); j++){
                    swap(mat[i][j], mat[j][i]);
                }
            }
            for(int i=0; i<mat.size(); i++){
                reverse(mat[i].begin(), mat[i].end());
            }
            for(int i=0; i<mat.size(); i++){
                for(int j=0; j<mat.size(); j++){
                    cout << mat[i][j] << " ";
                }
                cout << endl;
            }
            if(mat == target){
                return true;
            }
        }
        return false;
    }
};
