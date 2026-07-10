class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
       vector<int>mpp(26,0);
     for(int i=0;i<s.size();i++){
        mpp[s[i]-'a']++;
        mpp[t[i]-'a']--;
       
     }
     for(int x:mpp){
        if(x!=0) return false;
     }
     return true;

    }
};