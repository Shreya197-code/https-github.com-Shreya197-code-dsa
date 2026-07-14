class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if (p.size() > s.size())
    return {};
        vector<int>freq(26,0);
        vector<int> window(26, 0); 
        for(int i=0;i<p.size();i++){
            freq[p[i]-'a']++;
        }
        for(int i=0;i<p.size();i++){
            window[s[i]-'a']++;
        }
       vector<int>ans;
      if(freq==window){
        ans.push_back(0);
      }
      for(int i=p.size();i<s.size();i++){
        int k=p.size();
        window[s[i]-'a']++;
        window[s[i-k]-'a']--;
        if(freq==window){
            ans.push_back(i-k+1);
        }
      }
        
       return ans;
    }

};