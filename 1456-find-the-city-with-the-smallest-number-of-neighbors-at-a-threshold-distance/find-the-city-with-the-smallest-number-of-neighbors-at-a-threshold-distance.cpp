class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<pair<int,int>>adj[n];
        for(auto it:edges){
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        }
        int cityNo=-1;
        int cityCnt=n;

        for(int k=0;k<n;k++){
            vector<int> dist(n,1e9);
            dist[k]=0;
            priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
            pq.push({0,k});

            while(!pq.empty()){
                int dis=pq.top().first;
                int node=pq.top().second;
                pq.pop();

                for(auto it:adj[node]){
                    int edW=it.second;
                    int adjNode=it.first;
                    if(dis+edW<dist[adjNode]){
                        dist[adjNode]=edW+dis;
                        pq.push({dist[adjNode],adjNode});
                    }
                }
            }
            
            int cnt=0;
            for(int i=0;i<n;i++){
                if(dist[i]<=distanceThreshold){
                    cnt++;
                }
            }
            if(cnt<=cityCnt){
                cityCnt=cnt;
                cityNo=k;
            }

        }
        return cityNo;
    }
};