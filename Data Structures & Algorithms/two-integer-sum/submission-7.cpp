class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0,j=n-1;
        while(i<j) {
            int sum = nums[i]+nums[j];
            if(sum==target) return {i,j};
            if(sum>target) {
                j--;
            }
            else if(sum<target) {
                i++;
            }
        }
        return {-1,-1};
        
    }
};
