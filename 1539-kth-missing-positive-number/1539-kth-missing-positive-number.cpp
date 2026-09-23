class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int i=0;
        int current=1;
        while(k>0){
            if(i<n && current==arr[i]){
                current++;
                i++;
            }
            else{
                k--;
                if(k==0) return current;
                current++;
            }
        }
        return -1;
    }
};