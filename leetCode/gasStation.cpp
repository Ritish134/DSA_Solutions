class Solution {
public:
   int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int total_gas=0,total_cost=0;
        
        int curr_gas=0, start=0;
        
        for(int i=0;i<n;i++)
        {
            //these two variable are to check if no case is possible
            total_gas+=gas[i];
            total_cost+=cost[i];
            
            
            //for checking the current index
            curr_gas+=gas[i]-cost[i];
            
            if(curr_gas<0)
            {
                //no index till i can fulfill the condition
                start=i+1;
                curr_gas=0;
                //this index was useless so starting from next index
            }
        }
        
        return (total_gas<total_cost)?-1:start;     
        
        
    }
};
