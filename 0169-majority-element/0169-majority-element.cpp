class Solution {
public:
    int majorityElement(vector<int>& nums) {
unordered_map<int,int>mpp;
for(int it:nums){
    mpp[it]++;
}
int n=nums.size();

for(auto x:mpp){
    if(x.second>n/2){
        return x.first;
    }
}
return 0;
    }
};