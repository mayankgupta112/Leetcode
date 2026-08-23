class Solution {
public:
    bool checkDivisibility(int n) {
        int wer=n;
        int sum=0,prod=1;
        while(n>0){
            int digit=n%10;
            sum=sum+digit; 
            prod=prod*digit;
            n=n/10;
        }
        int xyz=sum+prod;
       

        if(wer%xyz==0){
            return true;
        }
        return false;
        
      }
};