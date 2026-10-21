class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
double sum=0;
double maxi=INT_MIN;
for(int i=0;i<nums.size();i++){
    sum+=nums[i];
if(i>=k-1){
    maxi=max(sum,maxi);
    sum-=nums[i-k+1];
}

}
return maxi/k;
    }
};