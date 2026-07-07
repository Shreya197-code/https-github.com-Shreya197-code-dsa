class Solution {
public:

    long long sumAndMultiply(int n) {
        long long sum=0;
        vector<int>nz;
        while(n>0){
           int ls=n%10;
            n=n/10;
           if(ls!=0){
            nz.push_back(ls);
            sum+=ls;
           }
        }
        reverse(nz.begin(),nz.end());
        int num=0;
       for(int d:nz){
      num=num*10+d;
       }
    return sum*num;

    }
};