class Solution {
public:
    int fo(vector<int>& nums, int target)
    {
        int l=0,r=nums.size() - 1;
        int ans = -1;
        while(l<=r)
        {
            int mid = l + (r-l)/2;
            if(nums[mid] == target)
            {
                ans = mid;
                r = mid-1;
            }
            else if(nums[mid] < target)l = mid+1;
            else r = mid -1;
        }
        return ans;
    }
    int lo(vector<int>& nums, int target)
    {
        int l=0,r=nums.size() - 1;
        int ans = -1;
        while(l<=r)
        {
            int mid = l + (r-l)/2;
            if(nums[mid] == target)
            {
                ans = mid;
                l = mid+1;
            }
            else if(nums[mid] < target)l = mid+1;
            else r = mid -1;
        }
        return ans;
    }


    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v(2);
        v[0] = fo(nums,target);
        v[1] = lo(nums,target);
        return v;
    }
};