class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {

        unordered_map<int,list<pair<int,int>>> adj;

        for(int i=0; i<times.size(); i++) {
            int u = times[i][0];
            int v = times[i][1];
            int w = times[i][2];

            adj[u].push_back({v,w});
        }

        set<pair<int,int>> st;

        vector<int> dist(n+1);

        for(int i=1; i<=n; i++) {
            dist[i] = INT_MAX;
        }

        int src = k;

        dist[src] = 0;

        st.insert({0,src});

        while(!st.empty()) {

            auto top = *(st.begin());

            int nodedistance = top.first;
            int node = top.second;

            st.erase(st.begin());

            for(auto x : adj[node]) {

                if(nodedistance + x.second < dist[x.first]) {

                    auto record = st.find({dist[x.first],x.first});

                    if(record != st.end())
                        st.erase(record);

                    dist[x.first] = nodedistance + x.second;

                    st.insert({dist[x.first],x.first});
                }
            }
        }

        int ans = 0;

        for(int i=1; i<=n; i++) {

            if(dist[i] == INT_MAX)
                return -1;

            ans = max(ans,dist[i]);
        }

        return ans;
    }
};