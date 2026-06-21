// The Manhattan Distance between two cells 
// (xi, yi) and (xj, yj) is |xi - xj| + |yi - yj|
// there is a property of manhattam distance the order of 
//opration doesnt matter after performing LLRlRURUDUDD
// or you perfor LLLRRRDDDUUU

// final ans will be |L-R|+|U-D|+underscore
// TC-o(|s|)


#define ll long long
class Solution {
public:
    int maxDistance(string moves) {
        ll x=0;
        ll y=0;
        ll k=0;
        
        for(auto & ch : moves){
            if(ch=='R')x++;
            else if(ch=='L')x--;
            else if(ch=='U')y++;
            else if(ch=='D')y--;
            else k++;
        }
        return abs(x)+abs(y)+k;
    }
};