class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int count=0;
        string s = to_string(num);
        for(int i=0;i<=s.size()-k;i++){
int x = stoi(s.substr(i, k));
if (x != 0 && num % x == 0)count++;
        }

return count;
    }
};