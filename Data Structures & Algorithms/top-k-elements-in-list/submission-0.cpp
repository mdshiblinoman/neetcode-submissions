class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int>mp;
        for(auto u: nums) {
            mp[u]++;
        }

        vector<int>ans;
        for(int i = 0; i < k; i++) {
            int mx = 0;
            int in = -1;
            for(auto u: mp) {
                if(mx <= u.second) {
                    mx = u.second;
                    in = u.first;
                }
            }
            ans.push_back(in);
            mp.erase(in);
        }

        return ans;
    }
};
