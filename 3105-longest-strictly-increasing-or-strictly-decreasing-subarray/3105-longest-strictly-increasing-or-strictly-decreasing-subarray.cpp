class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc=1;
        int dec=1;
        int i=0;
        int j=1;
        int ans=1;
        while(j<nums.size()){
            if(nums[j]>nums[i]){
                  inc++;
                  dec=1;
            }
            else if(nums[j]<nums[i]){
                dec++;
                inc=1;
            }
            else{
                inc=1;
                dec=1;
            }
            ans=max(ans,max(inc,dec));
            i++;
            j++;
        }
        return ans;
    }
};