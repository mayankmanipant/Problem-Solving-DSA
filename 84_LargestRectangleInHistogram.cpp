class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        int n=heights.size();
        int max_area=0,h=0,w=0;
        for(int i=0;i<heights.size();i++){
            while(!st.empty() && heights[i]<heights[st.top()]){
                    h=heights[st.top()];
                    st.pop();
                    if(st.empty()) w=i;
                    else w=i-st.top()-1;
                    max_area=max(max_area,h*w);
            }
            st.push(i);
        }
        while(!st.empty()){
            h=heights[st.top()];
            st.pop();
            if(st.empty()) w=n;
            else w=n-st.top()-1;
            max_area=max(max_area,h*w);
        }
        return max_area;
    }
};
