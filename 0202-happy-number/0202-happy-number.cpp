class Solution {
public:

int total(int n){
    int sum=0;
    while(n>0){
        int ld=n%10;
        sum+= ld*ld;
        n=n/10;
    }
    return sum;
}
    bool isHappy(int n) {
        int slow=n;
        int fast=n;

      do{
        slow=total(slow);
        fast=total(total(fast));
      }
      while(slow!=fast);
      return slow==1;
        
    }
};