class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) {
        sort(v.begin(), v.end());
        vector<vector<int>> ans;
        int n = v.size();
        for(int i=0; i<n; i++) {
            int j = i+1, k = n-1;
            if(i > 0 && v[i] == v[i-1]) continue;
            while(j < k) {
                if(v[i] + v[j] + v[k] > 0) {
                    k--;
                }
                else if(v[i] + v[j] + v[k] < 0) {
                    j++;
                }
                else {
                    ans.push_back({v[i], v[j], v[k]});
                    j++;
                    k--;
                    while(j < k && v[j] == v[j-1]) j++;
                    while(j < k && v[k] == v[k+1]) k--;
                }
            }
        }
        return ans;
    }
};