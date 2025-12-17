class Solution {
public:
    int pivotInteger(int n) {
        int leftsum=0;
        int rightsum=0;
        for(int x=1;x<=n;x++){
         leftsum=x*(x+1)/2;
         rightsum=n*(n+1)/2-leftsum+x;
     if(leftsum==rightsum){
        return x;
     }
        }
        return -1;
    }
};