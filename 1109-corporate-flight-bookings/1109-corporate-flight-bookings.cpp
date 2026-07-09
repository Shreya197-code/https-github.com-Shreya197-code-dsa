class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
     vector<int>diff(n+1,0);
     for(auto book:bookings){
        int first=book[0];
        int last=book[1];
        int seats=book[2];
  diff[first-1]+=seats;
  if(last<n){
    diff[last]-=seats;
  }
     }
     for(int i=1;i<n;i++){
        diff[i]+=diff[i-1];
     }
     diff.pop_back();
     return diff;
    }
};