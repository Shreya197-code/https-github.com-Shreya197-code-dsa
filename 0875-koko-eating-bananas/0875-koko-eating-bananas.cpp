class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
         int low=1;
         int high= *max_element(piles.begin(),piles.end());
         int ans=0;
         while(low<=high){
            int mid=low+(high-low)/2;
            long long totalhour=0;
            for(int pile:piles){
            totalhour+=ceil(double(pile)/mid);
            }
            if(totalhour<=h){
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