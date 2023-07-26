class Solution {
    public int singleNumber(int[] nums) {
        int ans=0;
         for(int i=0;i<nums.length;i++){
            ans ^= nums[i];         // By taking XOR of every element if every no. appears twice expect one IT gives that element.
        }
        return ans;
    }
}
