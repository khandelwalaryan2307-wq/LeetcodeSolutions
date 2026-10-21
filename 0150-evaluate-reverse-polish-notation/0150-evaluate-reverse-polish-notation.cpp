class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string>st;
        for(int i=0;i<tokens.size();i++){
            string ch=tokens[i];
            if(ch=="+" && !st.empty()){
                string curr=st.top();
                 int currele=stoi(curr);
                 st.pop();
                 string curr2=st.top();
                 int currele2=stoi(curr2);
                 st.pop();
                 int ans2=currele2+currele;
                 string ans=to_string(ans2);
                 st.push(ans);
            }
            else if(ch=="*" && !st.empty()){
                string curr=st.top();
                 int currele=stoi(curr);
                 st.pop();
                 string curr2=st.top();
                 int currele2=stoi(curr2);
                 st.pop();
                 int ans2=currele2*currele;
                 string ans=to_string(ans2);
                 st.push(ans);
            }
            else if(ch=="-" && !st.empty()){
                string curr=st.top();
                 int currele=stoi(curr);
                 st.pop();
                 string curr2=st.top();
                 int currele2=stoi(curr2);
                 st.pop();
                 int ans2=currele2-currele;
                 string ans=to_string(ans2);
                 st.push(ans);
            }
            else if(ch=="/" && !st.empty()){
                string curr=st.top();
                 int currele=stoi(curr);
                 st.pop();
                 string curr2=st.top();
                 int currele2=stoi(curr2);
                 st.pop();
                 int ans2=currele2/currele;
                 string ans=to_string(ans2);
                 st.push(ans);
            }
            else
             st.push(ch);
        }
        return stoi(st.top());
    }
};