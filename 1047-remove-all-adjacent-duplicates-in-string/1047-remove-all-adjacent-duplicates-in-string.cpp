class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        string k="";
        for(int i=0;i<s.size();i++){
            if(!st.empty()&&st.top()==s[i])
              st.pop();
            else  
            st.push(s[i]);
        }
        while(!st.empty()){
            k+=st.top();
            st.pop();
        }
        reverse(k.begin(),k.end());
        return k;
    }
};