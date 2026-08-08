class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int>mpp;
       for(int i=0;i<nums.size();i++){
        int needed=target-nums[i];
        if(mpp.find(needed)!=mpp.end()){
            return {i,mpp[needed]};
        }
       mpp[nums[i]]=i;
       }
       return {};
    }
};