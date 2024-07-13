class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int,int>>adj[n+1];
        for(auto it:times){
            adj[it[0]].push_back({it[1],it[2]});
        }

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

        vector<int> dist(n+1,1e9);
        dist[k]=0;
        //{time,node}
        pq.push({0,k});

        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            int time=it.first;
            int node=it.second;
            // if(time>dist[node]){
            //     continue;
            // }
            

            for(auto iter:adj[node]){
                int adjNode=iter.first;
                int edgW=iter.second;
                if(time+edgW<dist[adjNode]){
                    dist[adjNode]=time+edgW;
                    pq.push({time+edgW,adjNode});
                }
            }
        }
        int maxDist=0;
        for(int i=1;i<=n;i++){
            if(dist[i]==1e9){
                return -1;
            }
            maxDist=max(maxDist,dist[i]);
        }
        return maxDist;
    }
};