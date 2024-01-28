class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Using unordered map
        unordered_map<int ,int> mp;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(mp.find(target - nums[i]) != mp.end()) //find() returns the iterator pointing to elemnent otherwise map.end() if element not found
                return {mp[target-nums[i]],i};
            mp[nums[i]] = i;
        }
        return {};
    }
};
// TC-> O(n)
