class Solution {
public:
    int n;
    struct node{
        long long score=-1;
        vector<int>idex;

    };
    vector<vector<node>>t;

    vector<int>nextIdx;
    
    int findNext(vector<vector<int>>&intervals,int endPoint){
        int l=0;
        int h=n-1;
        int result=n;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(intervals[mid][0]>endPoint){
                result=mid;
                h=mid-1;
            }else{
                l=mid+1;
            }
           
        }
         return result;
    }
    node solve(vector<vector<int>>&intervals,int i , int k){
        if(k==0||i>=n){
            return node();
        }
        if(t[i][k].score!=-1){
            return t[i][k];
        }
        node skip=solve(intervals,i+1,k);

        int weight=intervals[i][2];
        int idx=intervals[i][3];
        int j=nextIdx[i];


        node temp=solve(intervals,j,k-1);
        node take;

        take.score=temp.score+weight;
        take.idex=temp.idex;
        take.idex.push_back(idx);

        sort(take.idex.begin(),take.idex.end());
        node result;
        if(skip.score>take.score){
            result=skip;
        }else if(skip.score<take.score){
            result=take;
        }else{
            result=(skip.idex<take.idex)?skip:take;
        }

        return t[i][k]=result;
        
    }
    vector<int> maximumWeight(vector<vector<int>>& intervals) {
        n=intervals.size();
        for(int i=0;i<n;i++){
            intervals[i].push_back(i);
        }
        nextIdx.resize(n);

        sort(intervals.begin(),intervals.end());

        for(int i=0;i<n;i++){
            int endPoint=intervals[i][1];
            nextIdx[i]=findNext(intervals,endPoint);
        }

        t.assign(n+1,vector<node>(4+1));


        int k=4;

        return solve(intervals,0,k).idex;
        
    }
};