class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int empty=numBottles;
        int total=numBottles;
      while(empty>=numExchange){
        int newbottle=empty/numExchange;
        total+=newbottle;
        empty=(empty % numExchange) + newbottle;
      }
      return total;
    }
};