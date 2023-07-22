#include <bits/stdc++.h>
using namespace std;

class Solution{
public:

    
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int N, int K){
        for (int i = 0; i < N; i += K) {
        int left = i;
        int right = min(i + K - 1, N - 1);

        // Reverse the sub-array using two pointers
        while (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
         }
      }
    }
};

//{ Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
    return 0;
}
