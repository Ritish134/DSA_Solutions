class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n =arr.size();
        if(n<=1) return 0;
        int minPrice = arr[0];
        int maxProfit = 0;
        for(int i=1;i<n;++i){
            minPrice = min(minPrice,arr[i]);
            maxProfit = max(maxProfit,arr[i]-minPrice);
        }
        return maxProfit;
    }
};

// TC-> O(n)
// SC-> O(1)
