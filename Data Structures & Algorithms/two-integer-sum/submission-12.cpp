class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>seen;
        int n = nums.size();
        for(int i=0;i<n;i++) {
            if(seen.count(target-nums[i])) {
                return {seen[target-nums[i]],i};
            }
            seen[nums[i]]=i;

        }
        return {-1,-1};
        
    }
};
