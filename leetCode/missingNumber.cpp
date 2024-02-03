class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // APPROACH 1 //

        // int sum = 0;
        // int n = nums.size();
        // for(auto num :nums){
        //     sum += num;
        // }
        // return (n*(n+1))/2 - sum;

        // ------------------------//

        // APPROACH 2 // 

        int n = nums.size();
        int missing = n;
        for(int i=0;i<n;++i){
            missing ^= i^nums[i]; // as a^(a^b) = b
        }
        return missing;


    }
};
