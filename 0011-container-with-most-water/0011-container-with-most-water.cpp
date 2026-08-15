class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
      int left=0;
      int right=n-1;
        long long maxi=0;
        while(left<right){
            long long area=(right-left) * min(height[left],height[right]);
            if(height[left]<height[right]){
                left++;
            } 
     else{
        right--;
     }
     maxi=max(area,maxi);

        }
        return maxi;
    }
};