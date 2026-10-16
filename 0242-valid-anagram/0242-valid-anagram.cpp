class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
         return false;
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // for(int i=0;i<s.size();i++){
        //     if(s[i]!=t[i])
        //       return false;
        // }
        // return true;

        vector<int>freq1(26,0);
        vector<int>freq2(26,0);
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            int index=ch-'a';
            freq1[index]++;
        }
            for(int i=0;i<t.size();i++){
            char ch=t[i];
            int index=ch-'a';
            freq2[index]++;
        }
        for(int i=0;i<freq1.size();i++){
            if(freq1[i]!=freq2[i])
              return false;
        }
        return true;
    }
};