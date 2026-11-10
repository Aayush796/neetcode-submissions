class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string,vector<string>> map;
        for(string x:strs){
            vector<int> freq(26,0);
            for(char a:x){
                freq[a-'a']++;
            }
            string key=to_string(freq[0]);
            for(int i=1;i<26;++i){
                key+=','+to_string(freq[i]);
            }
            map[key].push_back(x);
        }
        for(auto x:map){
            result.push_back(x.second);
        }
        return result;
    }
};
