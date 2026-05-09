class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> count;
        for(int i=0;i<nums.size();i++){
            int curNum = nums[i];
            count[curNum] = count[curNum] + 1;
        }
        for(int i=0;i<nums.size();i++){
            int curNum = nums[i];
            if(count[curNum]>1){
                return true;
            }
        }
        return false;
    }
};