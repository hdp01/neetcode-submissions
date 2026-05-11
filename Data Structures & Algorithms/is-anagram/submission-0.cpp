class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> word;
        if(s.length()!=t.length()){
            return false;
        }
        for(int i=0;i<s.length();i++){
            char cha = s[i];
            word[cha] = word[cha]+1;
        }
        for(int i=0;i<t.length();i++){
            char cha = t[i];
            if(word[cha]!=0){
                word[cha] = word[cha]-1;
            } else {
                return false;
            }
        }
        return true;
    }
};
