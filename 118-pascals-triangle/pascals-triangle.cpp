class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n=numRows;
        vector<vector<int>>ans;
        int k;
        for(int i=0;i<n;i++){

            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
            vector<int>row;
                for(int j=0;j<=i;j++){
                    long long value=1;
                    for(int k=0;k<j;k++){
                        value=value*(i-k)/(k+1);
                    }
                    cout<<value<<"";
                    row.push_back(value);
            }
            cout<<endl;
            ans.push_back(row);
        }
        return ans;
        }
        
};