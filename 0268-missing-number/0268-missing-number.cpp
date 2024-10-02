class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int max=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>max)
            {
                max=nums[i];
            }
        }
        for(int i=0;i<=max;i++)
        {
            if(find(nums.begin(),nums.end(),i)==nums.end())
            {
                return i;
            }
        }
        return max+1;
    }
};