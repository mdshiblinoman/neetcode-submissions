class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int>mp;
        for(auto u: nums) {
            mp[u]++;
        }

        for(auto u: mp) {
            if(u.second > 1) {
                return true;
            }
        }

        return false;
    }
};