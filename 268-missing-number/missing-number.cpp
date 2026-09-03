class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int x,n=nums.size();
        int sum1;
         sum1=n*(n+1)/2;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            x=sum1-sum;
        }
        return x;
    }
};