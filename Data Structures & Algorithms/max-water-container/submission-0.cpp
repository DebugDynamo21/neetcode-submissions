class Solution {
public:
    int maxArea(vector<int>& heights) {
        int st = 0;
        int end = heights.size() - 1;
        int maxContainerArea = 0;

        while(st < end){
            int length = min(heights[st], heights[end]);
            int width = end - st;
            int area = length * width;

            if(heights[st] < heights[end]){
                st++;
            }else{
                end--;
            }

            maxContainerArea = max(maxContainerArea, area);
        }

        return maxContainerArea;
    }
};
