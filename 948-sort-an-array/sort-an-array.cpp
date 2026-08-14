class Solution {
public:
    void merge(vector<int>& nums,int l,int m,int r) {
    vector<int> left(nums.begin()+l,nums.begin()+m+1);
    vector<int> right(nums.begin()+m+1,nums.begin()+r+1);
    int i=0,j=0,k=l;
    while(i<left.size() && j<right.size()){
        if(left[i]<=right[j] )nums[k++]=left[i++];
        else nums[k++]=right[j++];
    }
    while(i<left.size()) nums[k++]=left[i++];
    while(j<right.size()) nums[k++]=right[j++];
  }
    void mergeSort(vector<int>& nums, int l, int r) {
        if (l >= r) return;
        int m = l + (r - l) / 2;
        mergeSort(nums, l, m);
        mergeSort(nums, m + 1, r);
        merge(nums, l, m, r);
    }
         vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};