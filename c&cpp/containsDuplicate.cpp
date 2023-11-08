class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> map;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(map.find(nums[i]) != map.end()){
                return true;
            }
            map.insert(nums[i]);
        }
        return false;
    }
};

// TC-> O(n)
// SC-> O(n)
