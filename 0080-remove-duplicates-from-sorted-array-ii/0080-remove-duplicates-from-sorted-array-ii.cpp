class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int k = 2;
        int n = nums.size();

        while(k < n) {
            if(nums[i] == nums[k]) {
                int j = k;
                while(j + 1 < n) {
                    swap(nums[j], nums[j+1]);
                    j++;
                }
                n--;
            }
            else {
                i++;
                k++;
            }
        }

        return n;
    }
};