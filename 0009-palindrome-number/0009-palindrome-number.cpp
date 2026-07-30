class Solution {
public:
    bool isPalindrome(int x) {

        if (x < 0)
            return false;

        int original = x;
        long long rev = 0;

        while (x > 0) {
            int id = x % 10;
            rev = rev * 10 + id;
            x = x / 10;
        }

        return rev == original;
    }
};