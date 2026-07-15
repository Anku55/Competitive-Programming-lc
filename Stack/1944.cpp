class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        int n=heights.size();
        vector<int>ans(n,0);
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            int vis=0;
            while(!st.empty()&&st.top()<heights[i]){
                vis++;
                st.pop();
            }
            if(!st.empty()&&st.top()>heights[i]){
                ans[i]+=1;
            }
            ans[i]+=vis;
            st.push(heights[i]);


        }
        return ans;
        
    }
};