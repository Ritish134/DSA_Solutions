class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();
        int maxEl = -1;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i] < nums[j]) maxEl = max(maxEl,nums[j]-nums[i]);
        //     }
        // }
        // APPROACH 2 O(n)
        int curr = nums[0];
        for(int i=1;i<n;i++){
            maxEl = max(maxEl, nums[i]-curr);
            curr = min(nums[i],curr);
        }
        return maxEl == 0? -1: maxEl;
    }
};
