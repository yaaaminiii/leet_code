class Solution {
public:
        bool isPalindrome(int x) {
    
    double rev_num=0,ori_num=x;
    while(x>0){
       int digit=x%10;
     rev_num=rev_num*10+digit;
        x/=10;
    }
   return ori_num==rev_num;
}
};


    