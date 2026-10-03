class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> freqArray;
        vector<int> result;
        vector<int> finalResult;
        unordered_map<int, int> freq;
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }
        for (auto x : freq) {
            freqArray.push_back(x.second);
        }
        sort(freqArray.begin(), freqArray.end(), greater<int>());
        for (int i = 0; i < k; i++) {
            result.push_back(freqArray[i]);
        }
        for (auto x : freq) {
            for (int i = 0; i < k; i++) {
                if (x.second == freqArray[i]) {
                    finalResult.push_back(x.first);
                    break;
                }
            }
        }
        return finalResult;
    }
};