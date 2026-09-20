class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
       int high=0;
       int low=*max_element(weights.begin(),weights.end());
     
        for (int x : weights) {
            high += x;
        }
        int ans=high;
       while(low<=high){
        int mid=low+(high-low)/2;
        int sum=0;
        int td=1;
        for(int i=0;i<weights.size();i++){
            
        if(sum+weights[i]<=mid){
            sum+=weights[i];
           
        }
        else{
            td++;
            sum=weights[i];
        }
        }
        if(td<=days){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }

       }
       return ans;
    }
};