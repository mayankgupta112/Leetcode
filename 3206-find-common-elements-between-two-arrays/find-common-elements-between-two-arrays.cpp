class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
       unordered_set<int> set1(nums1.begin(),nums1.end());
       unordered_set<int> set2(nums2.begin(),nums2.end());
       int x=0;
       int y=0;
       for(int i=0;i<nums1.size();i++){
          if(set2.count(nums1[i])>0){
            x++;
          }
       } 
       for(int i=0;i<nums2.size();i++){
          if(set1.count(nums2[i])>0){
            y++;
          }
       } 
       return {x,y};
    }
};