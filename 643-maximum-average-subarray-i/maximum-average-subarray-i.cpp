class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        int maxi;
        int n=nums.size();
        for(int i=0;i<k;i++){
          sum+=nums[i];}
          maxi=sum;
          for(int i=k;i<n;i++){
            sum+=nums[i]-nums[i-k];
            maxi=max(sum,maxi);
          }
          return double(maxi)/k;
    }
};