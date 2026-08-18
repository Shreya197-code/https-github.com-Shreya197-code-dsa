class Solution {
public:
    string removeDuplicateLetters(string s) {
        
        int freq[26];
        bool visited[26];
        string st;
        for(auto ch:s){
            freq[ch-'a']++;
        }
        for(char ch:s){
            if(visited[ch-'a']){
                freq[ch-'a']--;
                continue;
            }
        
         while (!st.empty() &&
                   st.back() > ch &&
                   freq[st.back() - 'a'] > 0) {

                visited[st.back() - 'a'] = false;
                st.pop_back();
            }

            st.push_back(ch);
            visited[ch - 'a'] = true;
            freq[ch - 'a']--;
        
        }
        return st;
    }
};
   