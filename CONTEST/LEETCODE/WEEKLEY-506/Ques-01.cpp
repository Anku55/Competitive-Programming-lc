Too easy problem did it in the first attempt itself
class Solution {
public:
    bool checkGoodInteger(int n) {
        int digitSum=0;
        int num=n;
        int digitSqureSum =0;
        while(num>0){
            int digit =num%10;
            digitSum+=digit;
            digitSqureSum+=digit*digit;
            num=num/10;
        }
        if(digitSqureSum-digitSum >=50)return true;
        
        return false;
        
    }
};