class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int n = nums.size();

        for(int i=0;i<n;i++){
            int sum = nums[i];

            if(sum == k) count++;

            for(int j=i+1;j<n;j++){
                sum += nums[j];
                if(sum==k) count++;
            }
        }
        return count;

        // Approach 2
        // unordered_map<int,int> map;

        // int sum=0,result=0;
        // map[sum]=1;

        // for(int n:nums){
        //     sum += n;
        //     result += map[sum-k];
        //     map[sum]++;
        // }
        // return result;
    }
};
