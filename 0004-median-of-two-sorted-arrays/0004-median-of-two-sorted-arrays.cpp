class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int>nums3;
        
        int i=0;
        int j=0;
        int k=0;
        while(i<n && j<m){
            if(nums1[i]<nums2[j]){
                nums3.push_back(nums1[i]);
                i++;
                k++;
            }
            else{
                nums3.push_back(nums2[j]);
                k++;
                j++;
            }
        }
        while(i<n){
         nums3.push_back(nums1[i]);
         i++;
         k++;
        }
        while(j<m){
         nums3.push_back(nums2[j]);
         j++;
         k++;
        }
        int z=nums3.size();
        
        if((z%2)==0){
            return (nums3[z/2]+nums3[z/2-1])/2.0;
        }
        else{
            return nums3[z/2];
        }
    }
};