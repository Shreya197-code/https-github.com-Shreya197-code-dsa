class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_set<int>st;
        for(auto x:nums){
            st.insert(x);
        }
        int s=st.size();
    int count=0;
    int n=nums.size();
    for(int i=0;i<n;i++){
        unordered_set<int>stt;
        for(int j=i;j<n;j++){
           stt.insert(nums[j]);
           if(stt.size()==s){
            count++;
           }
        }
    }
    return count;
        
    }
};