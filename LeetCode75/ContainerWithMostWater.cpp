class Solution {
public:
    int maxArea(vector<int>& height) {
        int right = height.size()-1;
        int maxi = 0;
        int left = 0;
        while(left!= right){
            int high = min(height[left],height[right]);
            maxi = max(high*(right-left),maxi);
            if(high == height[left]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxi;
    }
};