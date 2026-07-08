class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int count=0;
        int prefixsum=0;
        mpp[0]=1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            prefixsum+=nums[i];
          if(mpp.count(prefixsum-k)){
           count+=mpp[prefixsum-k];
          }
           mpp[prefixsum]++;
        }
        return count;
    }
};