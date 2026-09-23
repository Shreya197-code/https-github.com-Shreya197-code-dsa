class Solution {
public:

bool cansplit(vector<int>& nums, int k,int maxsum){
    int parts=1;
    long long sum=0;
    for(auto x:nums){
        if(sum+x<=maxsum){
            sum+=x;
        }
        else{
            parts++;
            sum=x;
        }
    }
    return parts<=k;
}

    int splitArray(vector<int>& nums, int k) {
        long long low=*max_element(nums.begin(),nums.end());
    long long high= accumulate(nums.begin(),nums.end(),0LL);
        while(low<high){
            long long mid=low+(high-low)/2;
            if(cansplit(nums,k,mid)){
                high=mid;
            }
            else{
                low=mid+1;
            }

        }
        return low;
 
    }
};