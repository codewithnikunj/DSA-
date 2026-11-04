class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        for(int i=0;i<nums.size()-1;i+=2){
            string temp1 = to_string(nums[i]);
            string temp2 = to_string(nums[i+1]);
            string ans = temp1+temp2;
            int num1 = stoi(ans);
            mini = min(num1,mini);
            
            
            
        }
        return mini;
    }
};