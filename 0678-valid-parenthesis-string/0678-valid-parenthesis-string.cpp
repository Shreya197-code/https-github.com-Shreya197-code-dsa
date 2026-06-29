class Solution {
public:
    bool checkValidString(string s) {
        int low=0; //mini ppen
        int high=0; //maxi open
    for(char c:s){
        if(c=='('){
            low++;
            high++;
        }
        else if(c==')'){
            low--;
            high--;
        }
        else{
            low--;
            high++;
        }
        if(high<0){
            return false;
         
        }
           low=max(low,0);
    }
        return low==0;
        
    }
};