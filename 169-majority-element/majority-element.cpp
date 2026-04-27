class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = nums[0];
        int count = 1;

        // Step 1: Find candidate
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == candidate)
                count++;
            else
                count--;

            if(count == 0) {
                candidate = nums[i];
                count = 1;
            }
        }

        return candidate;  // LC 169 me verification ki need nahi
    }
};