class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
       unordered_map<int,int>mpp;
       int prefix=0;
       mpp[0]=1;
       for(int i=0;i<n;i++){
        prefix+=nums[i];
        if(mpp.find(prefix-k)!=mpp.end()){
          count += mpp[prefix - k];
        }

mpp[prefix]++;
       }
    return count;   
    }
};