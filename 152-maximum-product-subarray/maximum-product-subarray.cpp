class Solution {
public:
    int maxProduct(vector<int>& v) {
        long long n = v.size();
        long long ans = INT_MIN;
        long long pref = 1, suff = 1;
        for(int i=0; i<n; i++) {
            if(pref == 0) pref = 1;
            if(suff == 0) suff = 1;
            pref *= v[i];
            suff *= v[n-i-1];
            ans = max(ans, max(pref, suff));
        }
        return ans;
    }
};