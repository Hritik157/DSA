class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int n = nums.size();
        int ans = nums[0];
        int curpos = nums[0], curneg = nums[0];
        for(int i = 1; i < n; i++) {
            if(nums[i] == 0) {
                curpos = 0;
                curneg = 0;
                ans = max(ans,0);
            }else if(nums[i] > 0) {
                ans = max(max(nums[i],ans),curpos*nums[i]);
                curpos = max(nums[i],curpos*nums[i]);
                curneg *= nums[i];
            }else {
                ans = max(max(ans, nums[i]),curneg*nums[i]);
                int t = curpos;
                curpos = max(nums[i], curneg*nums[i]);
                curneg = min(t*nums[i], nums[i]);
            }
        }
        return ans;
    }
};
