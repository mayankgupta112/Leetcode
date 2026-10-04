class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            int maxval=-1;
            for(int j=i+1;j<arr.size();j++){
                if(maxval<arr[j]){
                    maxval=arr[j];
                }
            }
            ans.push_back(maxval);
        }
        return ans;
    }
};