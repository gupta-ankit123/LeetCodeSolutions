class Solution {
public:
    bool dfsCheck(int node,vector<int> &vis,vector<int> &pathVis,vector<vector<int>>& graph,vector<int> &check){
        vis[node]=1;
        pathVis[node]=1;
        check[node]=0;
        for(auto it:graph[node]){
            if(!vis[it]){
                if(dfsCheck(it,vis,pathVis,graph,check)==true){
                    //we got a cycle it cannot be a safe node
                    return true;
                }

            }
            else if(pathVis[it]){
                //we got a cycle it cannot be a safe node
                return true;
            }
        }
        check[node]=1;
        pathVis[node]=0;
        return false;
    }
    
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int V=graph.size();
        vector<int> vis(V,0);
        vector<int> pathVis(V,0);
        vector<int> safeNodes;
        vector<int> check(V,0);

        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfsCheck(i,vis,pathVis,graph,check);
            }
        }
        for(int i=0;i<V;i++){
            if(check[i]==1) safeNodes.push_back(i);
        }
        return safeNodes;
    }
};