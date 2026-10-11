class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>set(nums.begin(),nums.end());
        int n=set.size();
        vector<int>ans;
            if(set.size()<=2){
                int maxi = *max_element(set.begin(),set.end()); 
                ans.push_back(maxi);
            }
            else if(set.size()>=3){
                int maxi = *max_element(set.begin(),set.end()); 
                set.erase(maxi);
                maxi = *max_element(set.begin(),set.end()); 
                set.erase(maxi);
                maxi = *max_element(set.begin(),set.end()); 
                ans.push_back(maxi);
            }

                
        return ans.back();
    }
};