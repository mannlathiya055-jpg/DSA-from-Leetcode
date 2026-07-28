class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int mn = *min_element(nums.begin(), nums.end());

        for(int start = 0; start < n; start++) {
            if(nums[start] != mn) continue;

            bool ok = true;
            for(int i = 0; i < n - 1; i++) {
                int curr = (start + i) % n;
                int next = (start + i + 1) % n;

                if(nums[curr] > nums[next]) {
                    ok = false;
                    break;
                }
            }

            if(ok) return true;
        }

        return false;
    }
};