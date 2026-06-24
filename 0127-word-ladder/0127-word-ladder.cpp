class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue<pair<string,int>>q; // string , steps 
        q.push({beginWord,1}); //begin in queue
        unordered_set<string>st(wordList.begin(),wordList.end()); //each word in set
        st.erase(beginWord); // visited word removed
        while(!q.empty()){
            string word = q.front().first;
            int steps=q.front().second;
            q.pop();
            if(word==endWord) return steps;
            for(int i=0;i<word.size();i++){
                char origi=word[i];
                for(char c='a' ; c<='z';c++){
                    word[i]=c;
                    if(st.find(word)!=st.end()){
                        st.erase(word);
                        q.push({word,steps+1});
                    }
                }
                word[i]=origi;

            }
        }
        return 0;
    }
};