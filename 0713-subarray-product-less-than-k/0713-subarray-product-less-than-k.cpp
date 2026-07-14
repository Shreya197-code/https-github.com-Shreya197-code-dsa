class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int count=0;
        int left=0;
        int mul=1;
        for(int right=0;right<nums.size();right++){
            mul*=nums[right];
            while(mul>=k){
                mul/=nums[left];
                left++;
            }

             count += (right - left + 1);

        }
return count;
        
    }
};