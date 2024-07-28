class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int counter = 0;
        int zeroCounter = 0;
        int maxi = 0;
        int left = 0;
        int right = 0;

        while (right != nums.size()&&left != nums.size()) {
            if(zeroCounter>k){
                if(!nums[left]){
                    zeroCounter--;
                }
                left++;
                counter--;
                continue;
            }
            if(!nums[right]){
                zeroCounter++;
            }
            right++;
            counter++;
            if(zeroCounter <= k){
                maxi = max(counter, maxi);
            }
        }
        
        return maxi;
    }
};