class Solution {
public:
    vector<int> numberGame(vector<int>& v) {
        int n = v.size();
        vector<int> ans(n);
        sort(v.begin(), v.end());
        int odd = 0, even = 1; 
        for(int i=0; i<n; i++) {
            if(i % 2 == 0) {
                ans[i] = v[even];
                even += 2;
            }
            else {
                ans[i] = v[odd];
                odd += 2;
            }
        }
        return ans;
    }
};