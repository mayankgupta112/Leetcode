class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>ans;
        ans.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            int value = nums[i]+ans[i-1];
            ans.push_back(value);
        }
        return ans;
    }
};