class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>result;
        unordered_set<int>seen(nums.begin(),nums.end());
        int maxi = *max_element(nums.begin(),nums.end());
        int mini = *min_element(nums.begin(),nums.end());
        for(int i=mini;i<=maxi;i++){
            if(!seen.count(i)){
                result.push_back(i);
            }

        }
        return result;

        
        
        
    }
};