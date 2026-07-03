class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int hash[26]={0};
        for(auto &ch :tasks){
            hash[ch-'A']++;
        }

        priority_queue<int>pq;
        for(int i=0;i<26;i++){
            if(hash[i]>0){
                pq.push(hash[i]);
            }
        }

        int time=0;

        while(!pq.empty()){
            vector<int>temp;
            for(int i=0;i<n+1;i++){
                if(!pq.empty()){
                    int freq=pq.top();
                    pq.pop();
                    freq--;
                    temp.push_back(freq);
                }
                
            }

            for(auto it : temp){
                if(it>0){
                    pq.push(it);
                }
            }

            if(pq.empty()){
                time+=temp.size();
            }else{
                time+=n+1;
            }

        }
        return time;
        
    }
};