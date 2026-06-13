################## Rcursie way###########
int fun(int ind,int last,vector<vector<int>> &points){
    if(ind==0){
        int maxi=0;
        for(int i=0;i<=2;i++){
            if(last !=i){
                maxi=max(points[ind][i],maxi);
            }
        }

        return maxi;
    }
    int maxi=0;

    for(int i=0;i<3;i++){
        if(i!=last){
            int point=points[ind][i]+fun(ind-1,i,points);

            maxi=max(maxi,point);

        }
    }

    return maxi;
}
int ninjaTraining(int n, vector<vector<int>> &points)

{

    return fun(n-1,3,points);

}

############## Memoaization way############
int fun(int ind,int last,vector<vector<int>> &points,vector<vector<int>>&dp){
    if(ind==0){
        int maxi=0;
        for(int i=0;i<=2;i++){
            if(last !=i){
                maxi=max(points[ind][i],maxi);
            }
        }

        return maxi;
    }
    if(dp[ind][last]!=-1){
        return dp[ind][last];
    }
    int maxi=0;

    for(int i=0;i<3;i++){
        if(i!=last){
            int point=points[ind][i]+fun(ind-1,i,points,dp);

            maxi=max(maxi,point);

        }
    }

    return dp[ind][last] =maxi;
}
int ninjaTraining(int n, vector<vector<int>> &points)

{
    vector<vector<int>> dp(n, vector<int>(4, -1));


    return fun(n-1,3,points,dp);

}
########################Tabulation ##########

int ninjaTraining(int n, vector<vector<int>> &points)

{
    vector<vector<int>> dp(n, vector<int>(4, -1));
    dp[0][0]=max(points[0][1],points[0][2]);
    dp[0][1]=max(points[0][0],points[0][2]);
    dp[0][2]=max(points[0][0],points[0][1]);

    for(int day=1;day<n;day++){
        for(int last=0;last<=3;last++){
            dp[day][last]=0;
            for(int i=0;i<3;i++){
                if(i!=last){
            int point=points[day][i]+dp[day-1][i];

            dp[day][last]=max(dp[day][last],point);


                        }
            }

        }
    }

    return dp[n-1][3];



}
