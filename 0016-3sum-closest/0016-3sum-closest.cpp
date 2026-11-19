class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int ans=nums[0]+nums[1]+nums[2];
        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++){
            if(i>0 && nums[i-1]==nums[i])
                continue;

            int j=i+1;
            int k=n-1;

            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];

                if(abs(target-sum)<abs(target-ans)){
                    ans=sum;
                }

                if(sum==target)
                    return sum;

                else if(sum<target)
                    j++;

                else
                    k--;
            }
        }

        return ans;
    }
};