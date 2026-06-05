class Solution {
public:
    string minWindow(string s, string t) {

        unordered_map<char, int> need, window;

        for (char c : t) {
            need[c]++;
        }

        int n = need.size();
        int cnt = 0;

        int left = 0, right = 0;
        int minLen = INT_MAX;
        int start = 0;

        while (right < s.size()) {
            char c = s[right];
            window[c]++;

            if (need.count(c) && window[c] == need[c]) {
                cnt++;
            }

            while (left <= right && cnt == n) {
                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    start = left;
                }

                char ch = s[left];
                window[ch]--;

                if (need.count(ch) && window[ch] < need[ch]) {
                    cnt--;
                }

                left++;
            }

            right++;
        }

        return (minLen == INT_MAX) ? "" : s.substr(start, minLen);
    }
};
