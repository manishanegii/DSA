class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> n;
        for(auto a: nums) n[a]++;
        for(auto a:n)
            if(a.second!=2) return a.first;
        return -1;
    }
};
/////////////////////////////////////////////////////



/////////////////////////////////////////////////////
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for(auto a: nums) res=res^a;
        return res;
    }
};
