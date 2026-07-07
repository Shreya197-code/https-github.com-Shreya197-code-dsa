class Solution {
public:

    long long sumAndMultiply(int n) {
        long long sum=0;
       long long place=1;
       long long num=0;
       while(n>0){
        int digit=n%10;
        n=n/10;
        if(digit!=0){
            sum+=digit;
            num+=digit*place;
            place*=10;
        }
    
       }
    return sum*num;

    }
};