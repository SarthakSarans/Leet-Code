class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> answer;

        for ( int i = 0; i < nums.size(); i ++){
            
            int other = target - nums[i];
            if(answer.count(other)>0){
                vector<int> result{i, answer[other]};
                return result;
            }
            answer[nums[i]] = i;
            
        }
        
         vector<int> result;
         return result;
    }
};
