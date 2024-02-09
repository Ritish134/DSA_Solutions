class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int maxArea = 0;
        int i = 0;
        int n = heights.size();

        while(i < n){
            if(st.empty() || heights[i] >= heights[st.top()]){
                st.push(i++);
            }
            else{
                int top = st.top();
                st.pop();
                int width = st.empty() ? i : i - st.top() - 1;
                maxArea = max(maxArea, heights[top] * width);
            }
        }

        while( !st.empty()){
            int top = st.top();
            st.pop();
            int width = st.empty()? i: i - st.top() - 1;
            maxArea = max(maxArea, heights[top] * width);
        }
        return maxArea;
    }
};
