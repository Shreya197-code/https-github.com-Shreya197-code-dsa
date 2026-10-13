class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int s=st.size();
        int n=nums.size();
        int left=0;
        int count=0;
        unordered_map<int,int>freq;
    for(int right=0;right<n;right++){
        freq[nums[right]]++;
        while(freq.size()==s){
            count+=n-right;
            freq[nums[left]]--;
            if(freq[nums[left]]==0){
                freq.erase(nums[left]);
            }
            left++;
        }
    }
    return count;   
    }
};