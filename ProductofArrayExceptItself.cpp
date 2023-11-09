class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> product(n,1);

        // leftProducts
        int leftProduct = 1;
        for(int i=1;i<n;i++){
            leftProduct *= nums[i-1];
            product[i] = leftProduct;
        }
        // RightProducts
        int rightProduct =1;
        for(int i = n-2;i>=0;i--){
            rightProduct *= nums[i+1];
            product[i] *= rightProduct;
        }
        return product;
    }
};
// TC->O(n)
// SC->O(1)
