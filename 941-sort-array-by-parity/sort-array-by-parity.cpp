class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        deque<int>result;
        for(int i=0;i<n;i++){
            int num=nums[i];
            if(num%2==0){
                result.push_front(num);
            }
            else if(num%2!=0){
                result.push_back(num);
            }
            else if(num==0){
                result.push_back(num);
            }
        }
        return vector<int>(result.begin(),result.end());
    }
};