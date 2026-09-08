class Solution {
public:
    int countCommas(int n) {
        if(n>=0 && 999>=n){
            return 0;
        }
        return n-999;
    }
};