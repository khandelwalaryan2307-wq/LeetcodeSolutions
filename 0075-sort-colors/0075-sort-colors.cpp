class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
            int mi=i;
            for(int j=i+1;j<nums.size();j++){
                if(nums[mi]>nums[j])
                  mi=j;
                
            }
              swap(nums[mi],nums[i]);
        }
    }
};