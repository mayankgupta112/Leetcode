class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
       
        int n=arr.size();
     for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){
            if(i==j) continue;
        if(arr[i]==2*arr[j] || arr[j]==2*arr[i]){
            
            return true;
        }
        // else if(arr[i]!=2*arr[j]){
        //     return false;
        // }
        }
        
     
     }   
     return false;
    }
};