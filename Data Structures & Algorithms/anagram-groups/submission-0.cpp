class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string>temp = strs;

        vector<vector<string>>ans;
        int n = strs.size();
        for(int i = 0; i < n; i++) {
            sort(temp[i].begin(), temp[i].end());
        }
        map<string, int>mp;
        for(auto u: temp) {
            mp[u]++;
        }
        for(auto u: mp) {
            vector<string>a;
            for(int i = 0; i < n; i++) {
                if(u.first == temp[i]) {
                    a.push_back(strs[i]);
                }
            }
            ans.push_back(a);
        }

        return ans;
    }
};
