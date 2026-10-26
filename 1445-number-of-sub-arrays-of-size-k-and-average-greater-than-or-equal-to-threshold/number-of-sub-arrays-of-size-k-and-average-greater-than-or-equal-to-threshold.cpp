class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int count=0;
        int avg=0;
        int sum=0;
        int mini;
        for(int i=0;i<k;i++){
            sum+=arr[i];
            mini=sum;
            avg=mini/k; 
        }     
         if(avg>=threshold){
            count++;
            } 
        for(int i=k;i<n;i++){
            sum+=arr[i]-arr[i-k];         
            avg=sum/k;
            if(avg>=threshold){
                count++;
            }
        }
        return count;
    }
};