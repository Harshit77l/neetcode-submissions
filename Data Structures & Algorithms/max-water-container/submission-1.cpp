class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int width,height,i=0,j=n-1;
        int currentmaxarea=0,maxarea=0;
        while(i<j){
            width=j-i;
            height=min(heights[i],heights[j]);
            currentmaxarea=width * height;

            maxarea=max(maxarea,currentmaxarea);

            if(heights[i]<heights[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxarea;
    }
};
