class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
      int cand1;
      int cand2;
      int count1=0;
      int count2=0;
      int n=nums.size();
      for(int x:nums){
        if(x==cand1){
            count1++;
        }
        else if(x==cand2){
            count2++;
        }
        else if(count1==0){
            cand1=x;
            count1++;
        }
        else if(count2==0){
            cand2=x;
            count2++;
        }
        else{
            count1--;
            count2--;
        }
      }
      count1=0;
      count2=0;
      vector<int>ans;
      for(int x:nums){
        if(x==cand1){
            count1++;
        }
     else if(x==cand2){
            count2++;
        }
      }
      if(count1>n/3){
        ans.push_back(cand1);
      }
      if(count2>n/3){
        ans.push_back(cand2);
      }
      return ans;

    }
};