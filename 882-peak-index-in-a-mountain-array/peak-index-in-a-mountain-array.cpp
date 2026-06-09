class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) 
    {
        int i=0;
        int n=arr.size()-1;
        
        int mid=i+(n-i)/2;
        
        while(i<n)
        {
            if(arr[mid]<arr[mid+1])
            {
                i=mid+1;
            }
            else
            {
                n=mid;
            }
            mid=i+(n-i)/2;
        }
        return i;
    }
};