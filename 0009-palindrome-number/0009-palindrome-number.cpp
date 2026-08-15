class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int temp=x;
    long long rev=0;
        while(x>0){
            int digit=x%10;
            rev = rev * 10 + digit;
            x=x/10;
        }
        if(rev>INT_MAX || rev<INT_MIN) return 0;
        return int(rev)==temp;
    }
};