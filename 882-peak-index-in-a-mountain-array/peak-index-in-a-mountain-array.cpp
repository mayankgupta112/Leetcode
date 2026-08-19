class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int max_value=arr[0];
        int count=0;
        for(int i=1;i<arr.size()-1;i++){
            if(arr[i]>max_value){
                max_value=arr[i];
                count++;
               
            }
        }
        return count;
    }
};