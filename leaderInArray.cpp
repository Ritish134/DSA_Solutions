class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> ans;
        // int flag=0;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(a[i] < a[j] ){
        //             flag =1;
        //         }
                
        //     }
        //     if(flag==0){
        //             ans.push_back(a[i]);
        //         }
        //     flag=0;
        // }
        int maxRight = a[n-1];
        ans.insert(ans.end(),maxRight);
        for(int i=n-2;i>=0;i--){
            if(a[i] >= maxRight){
                maxRight = a[i];
                ans.insert(ans.begin(),maxRight);
            }
        }
        
        return ans;
    }
