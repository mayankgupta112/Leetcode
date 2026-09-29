class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int r=n-1,l=0;
        int flag=0;
        int mid;
        if(l>r){
            return -1;
        }
        while(l<=r){
             mid=(l+r)/2;
            if(nums[mid]==target){
                flag=1;
                break;
            }
            else if(nums[mid]>target){
                r=mid-1;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
        }
        if(flag==1){
            return mid;
        }
        else{
            return -1;
        }
    }
};