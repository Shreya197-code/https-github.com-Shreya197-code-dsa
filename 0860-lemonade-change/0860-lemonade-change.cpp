class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0;
        int ten=0;
        for(auto bill:bills){
            if(bill==5){ //bill 5
                five++;
            }
            else if(bill==10){ //bill 10
                if(five==0){
                    return false;
                }
                five--;
                ten++;
            }
            else { //when bill 20
            if(ten>0 && five>0){
                ten--;
                five--;
            }
            else if(five>=3){
                    five-=3;
                }
                else{
                    return false;
                }
            }

            }
        
        return true;
        
    }
};