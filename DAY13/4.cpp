class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> ans;
        for(int i=0; i<12; i++){
            bitset<4> hr(i);
            for(int j=0; j<60; j++){
                bitset<6> min(j);
                if(hr.count() + min.count() == turnedOn){
                    string s1 = to_string(i);
                    string s2 = (j<10) ? ":0" : ":";
                    s2 = s2+to_string(j);
                    ans.push_back(s1+s2);
                }
            }
        }
        return ans;
    }
};
