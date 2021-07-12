class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string, int> b;
        for(int i=0; i<banned.size(); i++){
            b[banned[i]]++;
        }
        int freq = 0;
        string str = "";
        
        unordered_map<string, int> u;
         for(int i=0; i<paragraph.size(); i++){
             string s = "";
             while(i<paragraph.size() && isalpha(paragraph[i])){
                 paragraph[i] = tolower(paragraph[i]);
                 s.push_back(paragraph[i]);
                 i++;
             }
             if(b.find(s) == b.end() && s != ""){
                 u[s]++;
                 if(freq <= u[s]){
                     freq = u[s];
                     str = s;
                 }
             }
         }
        return str;   
    }
};
