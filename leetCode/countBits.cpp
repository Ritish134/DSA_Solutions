class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1,0);// Intialize with zeros
        for(int i=0;i<n+1;++i){
           ans[i] = ans[i / 2] + (i & 1);
        }
        return ans;
    }
};

// ans[i/2] is no. of set bits plus 1 if odd else 0
