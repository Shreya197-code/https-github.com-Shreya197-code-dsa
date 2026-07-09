class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int>diff(1001,0);
        for(auto &trip:trips){
            int p=trip[0];
            int from=trip[1];
            int to=trip[2];
            diff[from]+=p;
            diff[to]-=p;
        }
        int curr=0;
        for(int i=0;i<=1000;i++){
            curr+=diff[i];
            if(curr>capacity) return false;
        }
        return true;
        
    }
};