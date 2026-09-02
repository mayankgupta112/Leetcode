class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>s;
        while(n!=1){
            if(s.count(n)){
                return false;
            }
            s.insert(n);
            int sum=0;
            while(n>0){
                int digit=n%10;
                sum+=digit*digit;
                n/=10;
            }
            n=sum;
        }
        return true;
            }
     
    
};