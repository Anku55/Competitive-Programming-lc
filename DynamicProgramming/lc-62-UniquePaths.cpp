################# Recursive solutions #############
class Solution {
public:
    int totalPaths(int m ,int n){
        if(m==0&&n==0){
            return 1;
        }
        if(m<0||n<0){
            return 0;
        }
        int up=totalPaths(m-1,n);
        int left=totalPaths(m,n-1);
        return up +left;
    }
    int uniquePaths(int m, int n) {

        return totalPaths(m-1, n-1);
        
    }
};

