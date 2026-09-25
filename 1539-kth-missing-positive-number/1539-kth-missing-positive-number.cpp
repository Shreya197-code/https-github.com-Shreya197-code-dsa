class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int digit=1;
        int i=0;
        while(k>0){
            if(i<n && arr[i]==digit){
                i++;
                digit++;
            }
            else{
                k--;
                if(k==0){
                    return digit; 
                }
                digit++;

            }
        }
        return -1;

    }
};