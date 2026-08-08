class Solution {
public:
    int search(vector<int>& v, int x) {
        int lo = 0, hi = v.size() - 1;
        while(lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if(v[mid] == x) {
                return mid;
            }
            else if(v[mid] < x) {
                lo = mid + 1;
            }
            else {
                hi = mid - 1;
            }
        } 
        return -1;
    }
};