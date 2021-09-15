class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        util(nums, ans, 0, nums.size()-1);
        return ans;
    }
    void util(vector<int> nums, vector<vector<int>> &ans, int l, int r){
        
        if(l==r){
            ans.push_back(nums);
            return;
        }
        else
        {
            for(int i = l;i<=r;i++){
                if(l != i && nums[l] == nums[i]) 
                    continue;
                swap(nums[l], nums[i]);
                util(nums, ans, l+1, r);
            }
        }
        return;
    }
};
