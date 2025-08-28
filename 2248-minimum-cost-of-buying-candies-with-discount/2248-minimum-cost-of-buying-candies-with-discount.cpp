class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
       int total=0,count=0;
        for(int i=(cost.size())-1;i>=0;i--){
            count++;
            if(count%3!=0){
                total=total+cost[i];
            }
        }
        return total;

    }
};