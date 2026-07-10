class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>st(nums1.begin(),nums1.end());
        vector<int>ans;
        for(int x:nums2){
            if(st.find(x)!=st.end()) {
                ans.push_back(x);
                st.erase(x);
            }
        }
        return ans;
    }
};