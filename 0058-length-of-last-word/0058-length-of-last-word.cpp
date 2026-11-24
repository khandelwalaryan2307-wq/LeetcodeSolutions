class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt=0;
        int n=s.size();
        int e=n-1;
        while((s[e]==' '))
          e--;
        for(int l=e;l>=0;l--){
            if(s[l]!=' ')
              cnt++;
            else
             break;
        } 
        return cnt; 
    }
};