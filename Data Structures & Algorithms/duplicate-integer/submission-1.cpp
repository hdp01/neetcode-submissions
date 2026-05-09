class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for(int i=0;i<nums.size();i++){
            int curNum = nums[i];
            if(seen.count(curNum)>0){
                return true;
            }
            seen.insert(curNum);
        }
        return false;
    }
};