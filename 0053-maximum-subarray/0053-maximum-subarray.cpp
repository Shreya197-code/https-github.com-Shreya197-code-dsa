class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int n=nums.size();
       long long sum=0;
       long long maxsum=nums[0];
       for(int i=0;i<n;i++){
        sum+=nums[i]; 
        maxsum=max(sum,maxsum);
       if(sum<0){
        sum=0;
       }
       }
       
return maxsum;
    }
};