class Solution {
public:
    int maxArea(vector<int>& height) {
       int n=height.size(),area=0;
       int i=0;
       int j=n-1;
       while(i<j){
            int curarea=min(height[i],height[j])*(j-i);
            area=max(area,curarea);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }


       }
       return area;
    }
};