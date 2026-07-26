class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& v, int target) {
        vector<vector<int>> ans;
        sort(v.begin(), v.end());
        int n = v.size();
        for(int i=0; i<n; i++) {
            if(i > 0 && v[i] == v[i-1]) continue;
            for(int j=i+1; j<n; j++) {
                if(j > i+1 && v[j] == v[j-1]) continue;
                int k = j+1, l = n-1;
                while(k < l) {
                    long long sum = v[i] + v[j];
                    sum += v[k];
                    sum += v[l];
                    if(sum == target) {
                        ans.push_back({v[i], v[j], v[k], v[l]});
                        k++;
                        l--;
                        while(k < l && v[k] == v[k-1]) k++;
                        while(k < l && v[l] == v[l+1]) l--;
                    }   
                    else if(sum < target) {
                        k++;
                    }
                    else {
                        l--;
                    }
                }
            }
        }
        return ans;
    }
};