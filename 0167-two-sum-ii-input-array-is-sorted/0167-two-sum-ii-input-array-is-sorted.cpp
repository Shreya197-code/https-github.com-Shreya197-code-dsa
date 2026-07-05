class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
      unordered_map<int,int>mpp;
      for(int i=0;i<numbers.size();i++){
        int more=target-numbers[i];
        if(mpp.find(more)!=mpp.end()){
            return {mpp[more]+1,i+1};
        }
        mpp[numbers[i]]=i;
      }
      return {};
    }
};