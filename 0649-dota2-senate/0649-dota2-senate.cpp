class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int>q1;
        queue<int>q2;
        for(int i=0;i<senate.length();i++){
            if(senate[i]=='R'){
                q1.push(i);
            }
            else{
                q2.push(i);
            }
        }
        while(!q1.empty() && !q2.empty()){
            int r=q1.front();
            int d=q2.front();
            q1.pop();
            q2.pop();
            if(r<d){
                
                q1.push(r+senate.length());
            }
            else{

                q2.push(d+senate.length());
            }
        }
        if(q1.empty()){
            return "Dire";
        }
        else{
            return "Radiant";
        }
        
    }
};