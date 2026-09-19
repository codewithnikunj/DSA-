class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int first = 0;
        int second = 1;
        int third = 2;
        while(third<arr.size()){
            if(arr[first]%2!=0 && arr[second]%2!=0 && arr[third]%2!=0){
                return true;

            }
            first++;
            second++;
            third++;
        }
        return false;
    }
};