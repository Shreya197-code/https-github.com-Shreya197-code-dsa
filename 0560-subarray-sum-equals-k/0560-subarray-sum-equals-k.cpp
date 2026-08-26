class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int count=0;
       unordered_map<int,int>mpp;
       mpp[0]=1;
       int prefixsum=0;
       for(int x:nums){
        prefixsum+=x;
        if(mpp.find(prefixsum-k)!=mpp.end()){
            count+=mpp[prefixsum-k];
        }
        mpp[prefixsum]++;
       }
       return count;
    }
};