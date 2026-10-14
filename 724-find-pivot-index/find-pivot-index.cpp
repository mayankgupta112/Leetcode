class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total=0;
        int leftsum=0;
        for(int x:nums)
        total+=x;
        for(int i=0;i<nums.size();i++){
            int rightsum=total-leftsum-nums[i];
            if(rightsum==leftsum){
                return i;
            }
            leftsum+=nums[i];
        }
    return -1;
            }
};