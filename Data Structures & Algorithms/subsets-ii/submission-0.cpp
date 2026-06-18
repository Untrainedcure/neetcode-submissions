class Solution {
public:
    void getSubsets(int id, vector<int>&nums,vector<int>&curr,vector<vector<int>>& ans) {
        ans.push_back(curr);
        for(int i=id;i<nums.size();i++) {
            if(i!=id && nums[i]==nums[i-1]) continue;
            curr.push_back(nums[i]);
            getSubsets(i+1,nums,curr,ans);
            curr.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>curr;
        vector<vector<int>> ans;
        getSubsets(0,nums,curr,ans);
        return ans;
        
    }
};
