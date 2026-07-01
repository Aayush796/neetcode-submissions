class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        unordered_map<char,int> freq1;
        for(char x:s){
            freq1[x]++;
        }
        for(char x:t){
            if(freq1.find(x)==freq1.end() || freq1[x] == 0){return 0;}
            freq1[x]--;
        }
        return 1;
    }
};
