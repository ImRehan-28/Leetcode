class Solution {
public:
    int firstOccurence(vector<int>& nums,int target)
    {
        int low=0;
        int high=nums.size()-1;
        int idx=-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;

            if(nums[mid]==target)
            {
                idx=mid;
                high=mid-1;
            }
            else if(nums[mid]<target)
            {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }

        return idx;
    }

    int lastOccurence(vector<int>& nums,int target)
    {
        int low=0;
        int high=nums.size()-1;
        int idx=-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;

            if(nums[mid]==target)
            {
                idx=mid;
                low=mid+1;
            }
            else if(nums[mid]<target)
            {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }

        return idx;
    }
    vector<int> searchRange(vector<int>& nums, int target)
    {
        int first=firstOccurence(nums,target);
        int last=lastOccurence(nums,target);  

        vector<int> val;
        val.push_back(first);
        val.push_back(last);

        return val;  
    }
};