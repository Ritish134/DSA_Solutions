#include <vector>

using namespace std;

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> memo(m, vector<int>(n, -1)); // Memoization
        return grid(0, 0, m - 1, n - 1, memo);
    }
    
    int grid(int startRow, int startCol, int endRow, int endCol, vector<vector<int>>& memo) {
        if (startRow > endRow || startCol > endCol) return 0;
        if (startRow == endRow && startCol == endCol) return 1;
        
        if (memo[startRow][startCol] != -1) // If already calculated, return memoized value
            return memo[startRow][startCol];
        
        int downWays = grid(startRow + 1, startCol, endRow, endCol, memo);
        int rightWays = grid(startRow, startCol + 1, endRow, endCol, memo);
        int totalWays = downWays + rightWays;
        
        // Memoize the result
        memo[startRow][startCol] = totalWays;
        return totalWays;
    }
};
