class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string s = "";

        for(int i = 0; i <= path.size(); i++) {
            if(i == path.size() || path[i] == '/') {

                if(s == "" || s == ".") {
                    s = "";
                    continue;
                }

                if(s == "..") {
                    if(!st.empty())
                        st.pop();
                }
                else {
                    st.push(s);
                }

                s = "";
            }
            else {
                s += path[i];
            }
        }

        string ans = "";

        while(!st.empty()) {
            ans = "/" + st.top() + ans;
            st.pop();
        }

        if(ans == "")
            return "/";

        return ans;
    }
};