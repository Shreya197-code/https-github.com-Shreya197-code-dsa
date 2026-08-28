class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        for(auto interval:intervals){
            //no overlap
            if(ans.empty()|| ans.back()[1]<interval[0]){
                  ans.push_back(interval);
            }
            //overlap
            else{
               ans.back()[1]=max(ans.back()[1],interval[1]);
            }
            
        }
        return ans;

    }
};