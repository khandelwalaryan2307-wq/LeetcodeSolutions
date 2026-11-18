class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {

        unordered_map<int,list<pair<int,int>>> adj;

        for(int i=0; i<flights.size(); i++){
            int u = flights[i][0];
            int v = flights[i][1];
            int w = flights[i][2];

            adj[u].push_back({v,w});
        }

        vector<vector<int>> dist(n, vector<int>(k+2, INT_MAX));

        set<tuple<int,int,int>> st;

        dist[src][0] = 0;
        st.insert({0,src,0});

        while(!st.empty()){

            auto top = *(st.begin());

            int nodedistance = get<0>(top);
            int node = get<1>(top);
            int stops = get<2>(top);

            st.erase(st.begin());

            if(node == dst)
                return nodedistance;

            if(stops == k+1)
                continue;

            for(auto x : adj[node]){

                int newnode = x.first;
                int newdistance = x.second;

                if(nodedistance + newdistance < dist[newnode][stops+1]){

                    dist[newnode][stops+1] = nodedistance + newdistance;

                    st.insert({dist[newnode][stops+1],newnode,stops+1});
                }
            }
        }

        return -1;
    }
};