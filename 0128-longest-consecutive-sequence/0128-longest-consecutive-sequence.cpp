class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
unordered_set<int>st;
int count=0;
int maxi=0;
for(auto x:nums){
    st.insert(x);
}
for(auto x:st){
    if(st.find(x-1)==st.end()){
        count=1;
          int element=x;

        while(st.find(element+1)!=st.end()){
         count++;
         element++;
        }
    }
    maxi=max(count,maxi);
}
return maxi;
    }
};