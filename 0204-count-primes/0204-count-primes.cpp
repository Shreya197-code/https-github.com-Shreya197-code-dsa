class Solution {
public:
    int countPrimes(int n) {
        int count=0;
    vector<bool>isprime(n,true);
    if(n<=2) return 0;
    isprime[0]=false;
    isprime[1]=false;
    for(int i=2;i*i<=n;i++){
        if(isprime[i]){
            for(int j=i*i;j<n;j+=i){
                isprime[j]=false;
            }
        }
    }
    for(int i=2;i<n;i++){
        if(isprime[i]){
            count++;
        }
    }
      return count; 
    }
};