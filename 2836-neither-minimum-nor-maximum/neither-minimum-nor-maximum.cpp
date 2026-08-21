class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size()<=2){
            return -1;
        }
        int max=*max_element(nums.begin(),nums.end());
        int min=*min_element(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=max && nums[i]!=min){
                return nums[i];
            }
        }
        return -1;
    }
};