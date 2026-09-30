class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int st = 0, end = n-1;

        while(st < end){
            int currSum = nums[st] + nums[end];
            if(currSum == target){
                return {st, end};
            }else if(currSum > target){
                end--;
            }else{
                st++;
            }
        }

        return {-1, -1};
    }
};
