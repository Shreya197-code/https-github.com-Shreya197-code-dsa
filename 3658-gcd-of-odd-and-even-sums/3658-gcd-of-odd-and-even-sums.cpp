class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        if(n==1) return 1;
        int sumodd=0;
        int sumeven=0;
       int counteven=0;
       int countodd=0;
        for(int i=1;i<2*n;i++){
          if(counteven<n && i%2==0){
            counteven++;
            sumeven+=i;
          }
          else {
            if(countodd<n){
                countodd++;
                sumodd+=i;
            }
          }
        }
        int ans=0;
        int mini=min(sumodd,sumeven);
        for(int i=1;i<=mini;i++){
            if(sumodd%i==0 && sumeven%i==0){
                ans=i;
            }
        }
        return ans;
    }
};