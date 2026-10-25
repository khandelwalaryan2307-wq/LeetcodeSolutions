class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        stack<int>st;
        int n=temperatures.size();
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
          while(!st.empty() && temperatures[i]>temperatures[st.top()]){
            ans[st.top()]=i-st.top();
         
            st.pop();
               
          }
          
            st.push(i);
          
              
        }
        // int m=ans.size();
        // while(m!=n){
        //     ans[m]=0;
        //     m++;
        // }
        return ans;
    }
};