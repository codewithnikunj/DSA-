class Solution {
public:
    bool uniformArray(vector<int>& nums1) {

        int mn = *min_element(nums1.begin(), nums1.end());

        // Smallest is odd
        if (mn % 2 == 1)
            return true;

        // Smallest is even
        // Then every element must be even
        for (int x : nums1) {
            if (x % 2 != 0)
                return false;
        }

        return true;
    }
};