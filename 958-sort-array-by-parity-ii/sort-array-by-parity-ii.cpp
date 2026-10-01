class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans (nums.size());
        vector<int>num=nums;
        int j=1;
        int i=0;
        for(int num:nums){
            if(num%2==0){
                ans[i]=num;
                i+=2;
            }
            else {
                ans[j]=num;
                j+=2;
            }
            
        }
        return ans;
    }
};