class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
       int target=threshold*k;
       int sum=0;
       int count=0;
       for(int i=0;i<k;i++){
        sum+=arr[i];
       }
       if(sum>=target)count++;
       for(int i=k;i<arr.size();i++){
        sum+=arr[i]-arr[i-k];
          if(sum>=target)count++;
       }
       return count;

    }
};