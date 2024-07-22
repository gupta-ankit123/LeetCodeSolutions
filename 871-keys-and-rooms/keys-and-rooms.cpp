class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<int> vis(n,0);
        vis[0]=1;
        queue<pair<int,int>> q;
        q.push({0,1});
        while(!q.empty()){
            int node=q.front().first;
            int sec=q.front().second;
            q.pop();
            for(auto it:rooms[node]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push({it,1});
                }
            }
        }
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                return false;
            }
        }
        return true;
    }
};