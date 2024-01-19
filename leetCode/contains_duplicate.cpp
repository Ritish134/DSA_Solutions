// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         unordered_set<int> map;
//         int n = nums.size();
//         for(int i=0;i<n;i++){
//             if(map.find(nums[i]) != map.end()){
//                 return true;
//             }
//             map.insert(nums[i]);
//         }
//         return false;
//     }
// };

// // TC-> O(n)
// // SC-> O(n)

// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         return nums.size() > set<int>(nums.begin(),nums.end()).size();
//     }
// };

// Best approach

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool ans = false;
        sort(nums.begin(), nums.end());
        for(int i =0; i<nums.size()-1; i++){
            if(nums[i] == nums[i+1]) ans = true;
        }
        return ans;
    }
};
