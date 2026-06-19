class Solution {
public:
    void findComb(int id,int target,vector<int>& nums,vector<int>& curr,vector<vector<int>>& ans) {
        if(target==0) {
            ans.push_back(curr);
        }
        for(int i=id;i<nums.size();i++) {
            if(i>id && nums[i]==nums[i-1]) continue;
            if(nums[i]>target) break;
            curr.push_back(nums[i]);
            findComb(i+1,target-nums[i],nums,curr,ans);
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> curr;
        vector<vector<int>> ans;
        findComb(0,target,candidates,curr,ans);
        return ans;
    }
};
