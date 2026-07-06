class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        for(int j=1;j<nums.size();j++){
            if(nums[i]!=0){
                i++;
            }
            swap(nums[i],nums[j]);

        }
        
    }
};