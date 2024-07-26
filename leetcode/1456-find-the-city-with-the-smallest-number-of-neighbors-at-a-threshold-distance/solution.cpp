class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<pair<int,int>>>graph(n);
        for(auto x:edges){
            int u=x[0];
            int v=x[1];
            int wt=x[2];
            graph[u].push_back({v,wt});
            graph[v].push_back({u,wt});
        }
        vector<vector<int>>ans(n);
        for(int i=0;i<n;i++){
            vector<int>dist(n,INT_MAX);
            dist[i]=0;
            queue<int>q;
            q.push(i);
            while(!q.empty()){
                int node=q.front();
                q.pop();
                for(auto x:graph[node]){
                    int to=x.first;
                    int w=x.second;
                    if(dist[node]+w < dist[to]){
                        dist[to]=dist[node]+w;
                        q.push(to);
                    }
                }
            }
            dist[i]=INT_MAX;
            vector<int>temp;
            for(int i=0;i<n;i++){
                if(dist[i]<=distanceThreshold){
                    temp.push_back(i);
                }
            }
            ans[i]=temp;
            temp.clear();
        }
        int final=n+1,d=INT_MAX;
        for(int i=0;i<n;i++){
            if(ans[i].size()<=d){
                d=ans[i].size();
                final=i;
            }
            
        }
        return final;


    }
};
