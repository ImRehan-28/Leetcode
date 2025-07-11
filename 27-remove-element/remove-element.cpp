class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int n=nums.size();
        int count=0;
        int i=0;
        while(i<n)
        {
            if(nums[i]!=val)
            {
                nums[count++]=nums[i];
            }
            i++;
        }
        return count;
    }
};