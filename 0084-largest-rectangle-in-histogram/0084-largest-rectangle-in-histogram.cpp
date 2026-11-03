class Solution {
public:
  void prevsmallerindex(vector<int>& heights,int prev[]){
    int n=heights.size();
    stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty() && heights[st.top()]>=heights[i])
          st.pop();
          if(st.empty())
              prev[i]=-1;
              else
              prev[i]=st.top();
              st.push(i);
    }
  }
    void nextsmallerindex(vector<int>& heights,int next[]){
    int n=heights.size();
    stack<int>st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && heights[st.top()]>=heights[i])
          st.pop();
          if(st.empty())
              next[i]=n;
              else
              next[i]=st.top();
              st.push(i);
    }
  }
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int prev[n];
        int next[n];
        prevsmallerindex(heights,prev);
        nextsmallerindex(heights,next);
        int maxans=-1;
        for(int i=0;i<n;i++){
            int height=heights[i];
            int width=next[i]-prev[i]-1;
            int ans=height*width;
            maxans=max(maxans,ans);
        }
        return maxans;
    }
};