//SOLUTION:

//https://leetcode.com/problems/cheapest-flights-within-k-stops/description/

/*class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& f, int s, int d, int k) {
        vector<pair<int,int>> adj[n];
         for(auto i:f)
        {
            adj[i[0]].push_back({i[1],i[2]});
        }
        queue<vector<int>> q;
        q.push({0,0,s});
        vector<int> distan(n,INT_MAX);
        distan[s]=0;
        while(!q.empty())
       {
           vector<int> v=q.front();
           int stops=v[0];
           int dis=v[1];
           int node=v[2];
           q.pop();
           if(stops>k) continue;
           for(auto i:adj[node])
           {
               int x=i.first;
               int y=i.second;
               if(dis+y<distan[x] && stops<=k)
               {
                   distan[x]=dis+y;
                   q.push({stops+1,dis+y,x});
               }
           }
        }
        for(auto i: distan){
           cout<<i<<" ";
        }
       if(distan[d]==INT_MAX) return -1;
       return distan[d];
    }
};*/