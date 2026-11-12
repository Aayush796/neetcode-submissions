class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0,j=heights.size()-1;
        int area=0;
        while(i<j){
            int l=min(heights[i],heights[j]);
            int curr=l*(j-i);
            area=max(area,curr);
             if (heights[i] < heights[j]) {
                i++;
            } else {
                j--;
            }
        }
        return area;
    }
};
