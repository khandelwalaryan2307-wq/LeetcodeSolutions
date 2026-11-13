class Solution {
public:
bool solve(vector<int>&nums,int i,int target,vector<vector<int>>&dp){
    
    if(target==0)
      return true;
      if(i>=nums.size()){
        return false;
    }
      if(target<0)
        return false;
    if(dp[i][target]!=-1)
      return dp[i][target];
    bool includeans=solve(nums,i+1,target-nums[i],dp);
    bool excludeans=solve(nums,i+1,target,dp);
    return dp[i][target]=includeans||excludeans;
}
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
          sum+=nums[i];
          if(sum%2!=0)
            return false;
          int target=sum/2;
          vector<vector<int>>dp(n, vector<int>(target+1, -1));
    
          return solve(nums,0,target,dp);
    }
};