class Solution {
public:
    bool isprime(int n){
        if(n<=1) return false;
        for(int i=2; i*i<=n; i++){
            if(n%i == 0) return false;
        }
        return true;
    }
    vector<int> maxPrimes(int n, int s) {
        vector<int>prime;
        int i=0;
        int sum=0;
        while(i<=n){
            
            if(isprime(i)){
                if(sum+i > s)break;
                sum+=i;
                prime.push_back(i);
            }
            i++;
        }
       return prime;
    }
};