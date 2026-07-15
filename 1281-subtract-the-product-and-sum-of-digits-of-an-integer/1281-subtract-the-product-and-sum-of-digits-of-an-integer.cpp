class Solution {
public:
    int subtractProductAndSum(int n) {
        int multi=1;
        int sum=0;
        while(n>0){
            int lastdigit=n%10;
            n=n/10;
           multi*=lastdigit;
           sum+=lastdigit;
        }
        return multi-sum;
    }
};