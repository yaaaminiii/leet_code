class Solution {
public:
    int fib(int n) {
        int a=0,b=1;

            for(int i=0;i<n;i++){
                
                int temp=a+b;
                a=b;
                b=temp;
            }
            return a;
        
    }
};