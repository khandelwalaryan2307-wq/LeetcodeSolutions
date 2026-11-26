class Solution {
public:
    bool canAliceWin(int n) {
          int aliceturn=0;
          int bobturn=0;
          int m=n;
          int k=10;
        while(n>0 && k>0){
            if(n-k>=0){
                
                n=n-k;
                aliceturn++;
                k--;
            }
            if(n-k>=0){
              n=n-k;
              bobturn++;
              k--;
            }
            else
            n--;
        }
        if(aliceturn>bobturn)
          return true;
          return false;
    }
};