class Solution {
public:
    string reverseWords(string s) {
        string word;
        stack<string>st;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                word+=s[i];
            }
            else{
                if(!word.empty()){
                    st.push(word);
                    word="";
                }
            }
        }

          if (!word.empty()) {
            st.push(word);
        }
        string ans="";
     while(!st.empty()){
        string x=st.top();
        st.pop();
        ans+=x;
        if(!st.empty()){
            ans+=" ";
        }

     }  
        return ans;

    }
};