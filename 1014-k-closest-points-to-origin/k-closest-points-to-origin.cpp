class node{
    public:
    int row;
    int col;
    int distance;

    node(int r,int c,int d){
        row=r;
        col=c;
        distance=d;
    }
};

class compare{
    public:
    bool operator()(node*a ,node*b){
        return a->distance>b->distance;
    }
};


class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<node*,vector<node*>,compare>minHeap;
        int n=points.size();

        for(int i=0;i<n;i++){
            int X=points[i][0];
            int Y=points[i][1];
            int dist=X*X+Y*Y;
            node* temp=new node(X,Y,dist);
            minHeap.push(temp);
        }

        

        vector<vector<int>>ans;

        while(k-- &&!minHeap.empty()){
            vector<int> res;
            node* temp=minHeap.top();
            minHeap.pop();
            res.push_back(temp->row);
            res.push_back(temp->col);

            ans.push_back(res);
        }
        return ans;
        
    }
};