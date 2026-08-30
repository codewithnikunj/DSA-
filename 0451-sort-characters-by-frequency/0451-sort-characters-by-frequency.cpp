class Solution {
public:
    string frequencySort(string s) {

        unordered_map<char, int> mp;

        // Frequency count
        for (char ch : s) {
            mp[ch]++;
        }

        // Convert map to vector
        vector<pair<char, int>> v(mp.begin(), mp.end());

        // Sort by frequency
        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        // Build answer
        string ans;

        for (auto &p : v) {
            ans += string(p.second, p.first);
        }

        return ans;
    }
};