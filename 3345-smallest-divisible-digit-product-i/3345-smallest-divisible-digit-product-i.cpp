class Solution {
public:
    int smallestNumber(int n, int t) {
        
        while(true)   {
            int product=1;
            int a=n;
        while(a>0){
            int digit=a%10;
            product*=digit;
            a/=10;        
        } 
        if(product%t==0){
            return n;
        }
        n++;
         }     
        
    }
};