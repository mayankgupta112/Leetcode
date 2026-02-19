bool isPalindrome(int x){
   long int digit,rev=0;
    long int p=x;
    if(p<0){
        return false;
    }
    while(p!=0){
    digit=p%10;
    rev=rev*10+digit;
    p=p/10;
    }
   if(x==rev){
       return true;
   }
   return false;
}