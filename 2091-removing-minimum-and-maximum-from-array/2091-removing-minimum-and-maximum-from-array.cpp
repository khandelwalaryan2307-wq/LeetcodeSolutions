class Solution {
public:
    int maxi_index(vector<int>& nums, int n) {
        int maxi = INT_MIN;
        int index = 0;

        for(int i = 0; i < n; i++) {
            if(nums[i] > maxi) {
                maxi = nums[i];
                index = i;
            }
        }
        return index;
    }

    int mini_index(vector<int>& nums, int n) {
        int mini = INT_MAX;
        int index = 0;

        for(int i = 0; i < n; i++) {
            if(nums[i] < mini) {
                mini = nums[i];
                index = i;
            }
        }
        return index;
    }

    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        int maxi = maxi_index(nums, n);
        int mini = mini_index(nums, n);

        int a = min(maxi, mini);
        int b = max(maxi, mini);

        int ans1 = b + 1;          
        int ans2 = n - a;         
        int ans3 = a + 1 + n - b;  

        return min(ans1, min(ans2, ans3));
    }
};