class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
         sort(nums.begin(),nums.end());
         int i=0;
         int j=nums.size()-1;
         int mid=i+(j-i)/2;
         return nums[mid];
    }
};