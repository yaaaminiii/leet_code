class Solution {
public:
    bool judgeCircle(string moves) {
        /*map<char,int>mpp;
        for(auto i: moves){
            mpp[i]++;
        }
        if(mpp['U']==mpp['D']  && mpp['L']==mpp['R']){
            return true;
        }
        else{
            return false;
        }*/
      int x=0,y=0;
      for(int i=0;i<moves.size();i++){
        if(moves[i]=='U'){
            x--;
        }
        else if(moves[i]=='D'){
            x++;
        }
        else if(moves[i]=='L'){
            y--;
        }
        else{
            y++;
        }
      }
      if(x==0 && y==0){
        return true;
      }
      else{
        return false;
      }
    }
};