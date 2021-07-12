class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> op;
        unordered_map<char, int> r({
            {'z',1},{'x',1},{'c',1},{'v',1},{'b',1},{'n',1},{'m',1},
            {'a',2},{'s',2},{'d',2},{'f',2},{'g',2},{'h',2},{'j',2},{'k',2},{'l',2},
            {'q',3},{'w',3},{'e',3},{'r',3},{'t',3},{'y',3},{'u',3},{'i',3},{'o',3},{'p',3}
        });
        int st;
        for(string s: words){
            st = r[tolower(s[0])];
            bool r1 = true;
            for(int i=1; i<s.size(); ++i){
                if(r[tolower(s[i])] != st){
                    r1 = false;
                    break;
                }
            }
            if(r1)
                op.push_back(s);
        }
        return op;
    }
};
