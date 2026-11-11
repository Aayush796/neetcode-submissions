class Solution {
public:
    bool isPalindrome(string s) {
        int start=0;
        int end=s.length()-1;
        while(start<end){
            while(start<end && !alphaNum(s[start])){start++;}
            while(start<end && !alphaNum(s[end])){end--;}
            if(tolower(s[start])!=tolower(s[end])){return 0;}
            start++;
            end--;
        }
        return 1;
    }
    bool alphaNum(char x){
            return (x>='A' && x<='Z'||
                    x>='a' && x<='z'||
                    x>='0' && x<='9');
    }
};
