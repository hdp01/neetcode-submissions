class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> sum;
        for(int i=0; i<nums.size(); i++){
            int find = target - nums[i];
            if(sum.count(find)>0){
                return {sum[find], i};
            }
            sum[nums[i]] = i;
        }
        return {-1,-1};
    }
};
